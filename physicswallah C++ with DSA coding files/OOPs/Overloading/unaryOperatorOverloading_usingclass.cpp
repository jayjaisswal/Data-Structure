#include<iostream>
using namespace std;

class demo{
    int x,y;
    public:

    demo(int a,int b){
        x=a;
        y=b;

    }
    void show(){
        cout<<"a :"<<x<<" "<<"b :"<<y<<endl;
    }
    demo operator -(){
       x=-x;
       y=-y;

    }
};

int main()
{
    demo d(7,8);
    d.show();
    -d;
    d.show();


return 0;
}