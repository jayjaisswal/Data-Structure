#include<iostream>
using namespace std;
class demo{
   int a,b;
   public:
   demo(){

   }
   demo(int x , int y){

    a=x; b=y;
   }
   void show()
   {
    cout<<a<<"+"<<b<<"i"<<endl;
   }
   demo operator +(demo obj)
   {
    demo temp;
    temp.a=a+obj.a;
    temp.b=b+obj.b;
    return temp;

   }
};
int main()
{
    demo ob(10,20),ob1(7,4),ob2;
    ob2=ob+ob1;
    ob2.show();



return 0;
}