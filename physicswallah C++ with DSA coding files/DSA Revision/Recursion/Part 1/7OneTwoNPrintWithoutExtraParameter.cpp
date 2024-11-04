// Write a program to calculate the sum of odd numbers between a
// and b (both inclusive) using recursion.

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