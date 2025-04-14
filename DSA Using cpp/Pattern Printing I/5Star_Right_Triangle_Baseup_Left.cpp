#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of Rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        //no. of stars = n+1-1
        for(int j=1;j<=n+1-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


return 0;
}