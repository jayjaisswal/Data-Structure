#include <iostream>
using namespace std;
void printOneTwoN(int i, int n)
{
    if (i > n) // base case
        return;
    cout<<i<<endl;
    printOneTwoN(i+1,n);
}

int main()
{

    printOneTwoN(1, 6);
}