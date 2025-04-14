#include<iostream>
using namespace std;
int main()
{   int x,y,z;
    cout<<"enter 1st number\n";
    cin>>x;
    cout<<"enter 1st number\n";
     cin>>y;
    cout<<"enter 1st number\n";
     cin>>z;
     if(x>y){
        if(x>z)
        {
            cout<<x<<" is greatest";
        }else
        {
            cout<<z<<" is greatst";
        }
     }
        else
        {
        cout<<y<<" is greatest";
        }
     


return 0;
}