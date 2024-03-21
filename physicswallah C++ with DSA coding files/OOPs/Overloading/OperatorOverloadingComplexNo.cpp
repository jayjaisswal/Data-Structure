#include<iostream>
using namespace std;

class Complex{

public:
    int real;
    int img;


    Complex(int x, int y){

        real = x;
        img = y;
    }

    Complex operator+(Complex &c2){
        Complex ans(0,0);
        ans.real=real + c2.real;
        ans.img = img + c2.img;
        return ans;
    }
};
int main()
{
    Complex c1(3,4);
    Complex c2(7,1);
    Complex c3 = c1+c2;
    cout<<c3.real<<"+i"<<c3.img<<endl;

return 0;
}