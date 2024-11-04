#include <iostream>
using namespace std;
int oddSum(int a, int b)
{

    if (a>b) //  base case
    {
        return 0;
    }
    else if(a%2==0) return oddSum(a+1 , b);
    else return a+oddSum(a+2 , b);

    
}

int main()
{

    cout<<oddSum(1, 5); // 1+3+5
}