#include <iostream>
using namespace std;
int printOneTwoN(int n)
{
    
    if (n == 1) //  base case
        return 1;
    cout << n << endl;
    printOneTwoN(n - 1);
}

int main()
{

    cout << printOneTwoN(5) << endl;
}