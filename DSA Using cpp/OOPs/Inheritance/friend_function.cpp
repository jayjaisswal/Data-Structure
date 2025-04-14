#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void getdata();
    friend int sum(demo);
};
void demo::getdata()
{
    cout<<"\nEnter two number "<<endl;;
    cin>>a>>b;
}
int sum(demo dd)
{
    return(dd.a+dd.b);
}
int main()
{
demo dd;
dd.getdata();
cout<<"Addition = "<<sum(dd);
return 0;
}