#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int p = 1;
    for (int i = 0; i < b; i++)
    {
        p = p * a;
    }
    return p;
}
int pwr(int a, int b)
{
    if (b == 0) // base case
        return 1;

    return a * pwr(a, b - 1);
}

int main()
{

    cout << pow(3, 3) << endl;
    cout << pwr(3, 2) << endl;
}