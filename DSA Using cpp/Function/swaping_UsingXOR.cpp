#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two Number "<<endl;
    cin>>a>>b;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<"A = "<<a<<" B = "<<b<<endl;


return 0;
}