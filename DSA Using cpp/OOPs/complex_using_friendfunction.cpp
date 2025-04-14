#include<iostream>
using namespace std;
template<typename T>
class Complex
{
private:
    T real;
    T img;
public:
    Complex(T x=0, T y=0)
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
    friend Complex operator+(Complex  &c1,  Complex &c2);
};
template<typename T>
Complex<T> operator+(Complex<T>   &c1, Complex<T>   &c2)
    {
        Complex<T> ans(0,0);
        ans.real=c1.real + c2.real;
        ans.img = c1. img + c2.img;
        return ans;
    }
int main()
{
    Complex<int> c1(3,4);
    Complex<int> c2(7,1);
    Complex<int> c3(c1);
    Complex<int> c4(c2);
    Complex<int> c5 = c3+c4;
    c5.show();


    Complex<double> c6(3.6765,4.676546);
    Complex<double> c7(7.654,1.3237);

    Complex<double> c8(c6);
    Complex<double> c9(c7);
    Complex<double> c10 = c8+c9;
    c10.show();
    return 0;
}