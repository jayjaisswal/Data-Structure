#include<iostream>
using namespace std;

class Sum{
    public:
     void add(int x, int y){

        int sum = x+y;
        cout<<"the sum is : "<<x+y<<endl;
     }

     void add(int x, int y,int z){

        int sum = x+y+z;
        cout<<"the sum is : "<<x+y+z<<endl;
     }

      void add(float x,float y){

        int sum = x+y;
        cout<<"the sum is : "<<x+y<<endl;
     }

};

int main()
{

    Sum s;
    s.add(7,9);
    s.add(7,9,8);
    s.add(float(7.8),float(9.0));


return 0;
}