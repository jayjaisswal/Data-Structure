#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}
int main()
{
    int x ,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;


return 0;
}