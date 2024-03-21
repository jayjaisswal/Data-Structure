#include<iostream>
using namespace std;
int main()
{
    int x = 78;
    int* p = &x;
    x = 98;
    cout<<*p<<endl;
    *p = 7;
    cout<<x;


return 0;
}