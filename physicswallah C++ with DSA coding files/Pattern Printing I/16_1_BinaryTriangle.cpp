#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of Sides :";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        if(i%2==0) a=0;
        else a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            //flippig
            if(a==1) a=0;
            else a=1;
        }
        cout<<endl;
    }


return 0;
}