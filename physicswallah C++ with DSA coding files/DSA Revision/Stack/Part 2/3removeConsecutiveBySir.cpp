#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;
void removeConse(string s){
    
      stack <char> st;
      string ans = ""; // no need of extra variable after loop we can do s = ""
      st.push(s[0]);
      for(int i=1;i<s.length();i++){  
           if(s[i]==st.top()) continue; // use != no need to use continue
           else st.push(s[i]);
      }

      while(st.size()!=0){
      ans = ans+ st.top();
      st.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

}

int main() {
    
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    removeConse(s);
}