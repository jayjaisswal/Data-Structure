#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of Sides :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }

return 0;
}