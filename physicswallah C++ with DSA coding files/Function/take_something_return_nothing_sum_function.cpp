//take something return nothing

#include<iostream>
using namespace std;
void sum(int a, int c);                            //function declaration

int main()
{
    int x,y;
    cout<<"enter first number "<<endl;
    cin>>x;
    cout<<"enter first number "<<endl;
    cin>>y;    
    sum(x,y);                            //function call
    return 0;
}

void sum(int a,int b)                           //function definition
{
   
     cout<<"the sum is "<<a+b;
}