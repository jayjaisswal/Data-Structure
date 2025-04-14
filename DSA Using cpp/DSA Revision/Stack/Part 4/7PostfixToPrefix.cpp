#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
string solve(string val1, char optr, string val2)
{
    string s = "";
    s.push_back(optr);
    s+= val1;
    s+= val2;
    return s;
}


int main()
{

    string s = "79+4*8/3-";  // postfix expression


    stack<string> val; // stack for values

    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is digit(0-9);
        if (s[i] >= 48 && s[i] <= 57) // digit
            val.push(to_string(s[i] - 48));     
        else
        { // operator
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, s[i], val2);
            val.push(ans);

            
        }
    }
    
    cout<<val.top();
}