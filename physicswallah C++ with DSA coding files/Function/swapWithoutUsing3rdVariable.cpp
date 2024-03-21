#include<iostream>
using namespace std;
void swap(int a,int b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
        cout<<"A = "<<a<<" B = "<<b<<endl;  

    }
int main()
{
    int x = 6;
    int y = 8;
    cout<<"A = "<<x<<" B = "<<y<<endl; 
    swap(x,y);
    return 0;
}