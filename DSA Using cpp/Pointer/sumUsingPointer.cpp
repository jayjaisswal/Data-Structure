#include <iostream>
using namespace std;
int main()
{
    // int x = 8;
    // int y = 89;
    // int* p = &x;
    // int* p2 = &y;
    // cout<<*p+*p2;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter Two Number :" << endl;
    cin>>*p1>>*p2;
    // cin >> x >> y;
    cout << *p1 + *p2 << endl;
    cout << x + y;

    return 0;
}