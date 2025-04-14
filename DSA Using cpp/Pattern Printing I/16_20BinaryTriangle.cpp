#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of Sides :";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2!=0) cout<<0<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }


return 0;
}