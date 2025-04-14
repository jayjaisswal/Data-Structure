#include <iostream>
using namespace std;
int printNTwo1(int n)
{

    if (n == 1) //  base case
        return 1;
    cout << n << endl;
    printNTwo1(n - 1);
}

int main()
{

    cout << printNTwo1(5) << endl;
    
}