#include <iostream>
#include <vector>
using namespace std;
void generateParenthesis(string s, int open, int close, int n)
{
    
    if ( close == n)
    {
       
            cout << s << endl;
            return;
        
    }
    
    if (open <n) generateParenthesis(s + '(', open + 1, close ,n);
    if(open>close ) generateParenthesis(s + ')', open, close + 1, n);
    
}

int main()
{
    int n = 3;
    generateParenthesis("", 0, 0, n);
}
