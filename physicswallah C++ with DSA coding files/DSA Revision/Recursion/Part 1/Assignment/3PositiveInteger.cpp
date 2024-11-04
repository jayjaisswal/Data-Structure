//  Given a positive integer, return true if it is a power of 2.
#include <iostream>
using namespace std;
bool pow2(int a)
{
    if(a==0) return false;
    if(a==1) return true;
    if (a % 2 != 0)
        return false;
    if (a % 2 == 0)
    {
        return pow2(a / 2);
    }
    
}

int main()
{

    cout << pow2(1);
}