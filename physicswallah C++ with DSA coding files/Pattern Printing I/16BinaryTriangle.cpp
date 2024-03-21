#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of rows :";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           if(i%2==0) a=0;
           else a=1;
           cout<<a<<" ";
        }
        cout<<endl;
    }


return 0;
}