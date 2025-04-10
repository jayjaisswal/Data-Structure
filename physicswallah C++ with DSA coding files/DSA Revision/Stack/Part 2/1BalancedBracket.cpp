#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string s) {
    if(s.length()%2!=0) return false;
    stack<char> sc;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]=='(')  sc.push('(');
           

        else if(s[i]==')') {
            if( sc.size()==0) return false;
            else  sc.pop();
        }
    }

    if(sc.size()==0) return true;
    else return false;  // handle this case ()()(
}

int main() {
    
    string s = "()()(";
    cout<<isBalanced(s);
    
}