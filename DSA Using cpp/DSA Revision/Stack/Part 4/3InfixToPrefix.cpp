#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
int priority(char optr)
{
    if (optr == '+' || optr == '-')
        return 1;
    else
        return 2;
}

string solve( char optr,string val1, string val2)
{
    // we have to store prefix in the ans
    // prefix is op v1 v2
    string s = "";
    s.push_back(optr);
    s+= val1;
    s+= val2;

    return s;


}

int main()
{

    string s = "(7+9)*4/8-3"; // infix expression
    // we need 2 stacks , 1 for vals and 1 for ops
    stack<char> op; // stack for operators
    stack<string> val; // stack for values

    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is digit(0-9);
        // int ascii = (int)(s[i]);
        // if(ascii>=48 && ascii<=57)// ASCII value of 0-9 is 48-57
        // in cpp if i compare character, it will compare ASCII value
        if (s[i] >= 48 && s[i] <= 57) // digit
            val.push(to_string(s[i] - 48));      // convert char to int
        else
        { // operator
            if (op.size () == 0 )  op.push(s[i]); 
            else if (op.top() == '(' )  op.push(s[i]); 
            else if (s[i] == '(' )  op.push(s[i]); 
            else if (s[i] == ')') {
                while (op.top() != '(') {
                    // work : val2 optr val1
                    char optr = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    // val1 optr val2
                    string ans = solve( optr,val1, val2);
                    val.push(ans);

                }
                op.pop(); // pop '('
            }   
            else if( priority(s[i]) > priority(op.top())) op.push(s[i]);
            
                 
            
            else
            { // priority(op.top())) <=op.push(s[i])
                while (op.size() > 0 && priority(s[i]) <= priority(op.top()))
                {
                    // work : val2 optr val1
                    char optr = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    // val1 optr val2
                    string ans = solve( optr,val1, val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the operator stack can have values
    // so make it empty
    while (op.size() > 0){
        // work : val2 optr val1
        char optr = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        // val1 optr val2
        string ans = solve( optr,val1, val2);
        val.push(ans);

    }
    cout<<val.top();
}