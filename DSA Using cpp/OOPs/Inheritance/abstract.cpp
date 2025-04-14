#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() = 0;
    void disp()
    {
        cout << "Hi i m Base Class"<<endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Hi i m Derived Class";
    }
};
int main()
{   
A*P;
B ob;
P=&ob;
P->disp();
P->show();
}