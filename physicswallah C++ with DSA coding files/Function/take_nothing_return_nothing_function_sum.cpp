// take nothing return nothing

#include <iostream>

using namespace std;

int sum(); // function declaration

int main()
{

    sum(); // function call

    return 0;
}
int sum() // function definition
{
    int a, b, c;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter 2nd number" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum is " << c;
}