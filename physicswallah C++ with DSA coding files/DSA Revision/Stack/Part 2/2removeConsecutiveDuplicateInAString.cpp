#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
void removeConse(string s){
      stack <char> st;
      string ans = "";
      for(int i=0;i<s.length();i++){
            st.push(s[i]); // all pushed into the stack
            if(i<s.length() && st.top()==s[i+1]){
                continue;
            }else{
                ans+=st.top();
            }
      }
      cout<<ans;


}

int main() {
    
    string s = "aaabbcddaabffg";
    removeConse(s);
}