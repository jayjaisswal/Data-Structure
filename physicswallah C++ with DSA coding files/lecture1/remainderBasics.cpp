#include<iostream>
using namespace std;
int main()
{
    
    int divisor;
    int divident;
    cin>>divisor>>divident;
    int quotient=divident/divisor;
    int remainder=divident-(divisor*quotient);
    cout<<remainder;
cout<<"9+9";
return 0;
}  //note that if we use modulus function then
//if a>b or a=b then you can use a%b
// but if a<b then then a will be the remainder
