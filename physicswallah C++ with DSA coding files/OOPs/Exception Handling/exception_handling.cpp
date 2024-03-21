#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two number :"<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
           cout<<"division is"<<c;
        }
        else
        {
            throw (b);
        }
        
    }
    catch(int exception)
    {
        cout<<"divided by "<<exception<<"error";
    }
    


return 0;
}