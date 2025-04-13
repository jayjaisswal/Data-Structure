#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
int solve(int val1, char optr, int val2)
{
    if (optr == '+')
        return val1 + val2;
    else if (optr == '-')
        return val1 - val2;
    else if (optr == '*')
        return val1 * val2;
    else
        return val1 / val2;
}




int main()
{

    string s = "-/*+79483";  // prefix expression


    stack<int> val; // stack for values

    for (int i = s.length()-1; i >=0 ; i--)
    {
        // check if s[i] is digit(0-9);
        if (s[i] >= 48 && s[i] <= 57) // digit
            val.push(s[i] - 48);     
        else
        { // operator
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
           int ans = solve(val1, s[i], val2);
           val.push(ans);

            
        }
    }
    
    cout<<val.top();
}