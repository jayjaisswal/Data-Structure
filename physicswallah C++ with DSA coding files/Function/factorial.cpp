#include <iostream>
using namespace std;
int fact(int x)
{
    int n = 1;
    for (int i = 1; i <= x; i++)
    {
        n = n * i;
        
    }
    return n;

}
    int main()
{
    int num;
    cout<<"Enter Intege :";
    cin>>num;
    cout<<fact(num);


    return 0;
}
