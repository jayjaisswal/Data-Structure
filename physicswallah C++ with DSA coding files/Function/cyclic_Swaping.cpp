#include<iostream>
using namespace std;
 void cyclicSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
int main()
{
    int a = 6 , b = 8 , c = 9;
    cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<endl;
    cyclicSwap(&a , &b , &c);
    cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<endl;

   


return 0;
}