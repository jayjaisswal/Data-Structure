#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter Value"<<endl;
    cin>>x;
    try
    {
            if(x==0)
            throw (x); // throw (integer)  error as we have not defined 
            if(x==100)
            throw ('c'); //do not throw error as we have defined its char using single quote
            if(x==1000)
            throw (5.5f);
    }
    catch(...)
    {
        cout<<"Error";
    }


return 0;
}