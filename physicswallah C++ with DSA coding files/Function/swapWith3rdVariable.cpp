#include<iostream>
using namespace std;
void swap(int x,int y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
        cout<<"A = "<<x<<" B = "<<y<<endl;  

    }
int main()
{
    int x = 6;
    int y = 8;
    cout<<"A = "<<x<<" B = "<<y<<endl; 
    swap(x,y);
    return 0;
}