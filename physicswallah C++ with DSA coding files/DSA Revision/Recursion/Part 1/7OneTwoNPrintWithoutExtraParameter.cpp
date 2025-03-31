

#include <iostream>
using namespace std;
void printOneTwoN(int n)
{
    if (n == 0) // base case
        return;
    printOneTwoN(n - 1);
    cout << n << endl;
}

int main()
{

    printOneTwoN(6);
}