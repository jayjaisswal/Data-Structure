// take something return something

#include <iostream>
using namespace std;

int sum(int, int); // function declaration

int main()
{
    int x, y;
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter first number" << endl;
    cin >> y;
    cout << "the sum is" << sum(x, y); // function call
    return 0;
}

int sum(int a, int b) // function definition
{


    return a+b;
}