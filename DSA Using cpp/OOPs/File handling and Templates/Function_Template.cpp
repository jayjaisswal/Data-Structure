#include<iostream>
using namespace std;
template<class T>
void display(T a , T b)
{
    cout<<"A "<<a<<endl<<"B "<<b<<endl;
}
int main()
{
    int p =10 , q = 11;
    char m = 'n', j = 'k';
    float s = 10.6, f = 17.09;
    display(p,q);
    display(m,j);
    display(s,f);



return 0;
}