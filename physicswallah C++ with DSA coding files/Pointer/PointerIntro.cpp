#include<iostream>
using namespace std;
int main()
{
    int x = 4;
    int* p = &x;
    cout<<&x<<endl; //0x61ff08
    cout<<p;        //0x61ff08


return 0;
}