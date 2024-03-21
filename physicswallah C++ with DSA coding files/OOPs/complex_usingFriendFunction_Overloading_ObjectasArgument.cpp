#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    Complex(int x=0, int y=0)
    {
        real = x;
        img = y;
    }
    ~Complex()
    {
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend Complex operator+(Complex &c1, Complex &c2);
};
Complex operator+(Complex &c1, Complex &c2)
    {
        Complex ans;
        ans.real=c1.real + c2.real;
        ans.img = c1.img + c2.img;
        return ans;
    }
int main()
{
    Complex c1(3,4);
    Complex c2(7,1);
    
    Complex c3(c1);
    Complex c4(c2);
    Complex c5 = c3+c4;
    c5.show();
    return 0;
}