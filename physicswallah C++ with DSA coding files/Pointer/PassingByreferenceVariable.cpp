#include<iostream>
using namespace std;

void value(int &x , int &y)
{
   
    x=5;
    y=6;
    cout<<"A is "<<x<<" , "<<"B is "<<y<<endl;
    

}
int main()
{
    int a = 3;
    int b = 4;
    cout<<"A is "<<a<<" , "<<"B is "<<b<<endl;
    value(a,b);
    cout<<"A is "<<a<<" , "<<"B is "<<b<<endl;
    
return 0;
}