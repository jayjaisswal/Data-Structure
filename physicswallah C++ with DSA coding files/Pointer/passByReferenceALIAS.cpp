#include <iostream>
using namespace std;
void swap(int &x, int &y) // pass by reference
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int a, b;
    cout << "Enter Two Number" << endl;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;

    return 0;
}