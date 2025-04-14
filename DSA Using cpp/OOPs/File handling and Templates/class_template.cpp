#include<iostream>
using namespace std;
template<class T>
class Display
{
    T a, b;
    public:
    Display(T p, T q)
    {
        a=p;
        b=q;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
Display<float> d(89.9,98.9);
d.show();

return 0;
}