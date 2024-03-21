#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p;
    cout << x << endl;
    cout << *ptr << endl;
    cout << **p << endl;
    cout << ***q << endl;

    cout << &x << endl;  // address of x
    cout << ptr << endl; // address of x
    cout << *p << endl;  // address of x
    cout << p << endl;

    return 0;
}