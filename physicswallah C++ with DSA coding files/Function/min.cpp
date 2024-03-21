#include <iostream>
#include <math.h>
using namespace std;
int mini(int p, int q)
{
    int a;
    if (p > q)
        a = q;
    else
        a = p;
    return a;
}
int main()
{
    int x, y;
    cout << "Enter x :";
    cin >> x;
    cout << "Enter y :";
    cin >> y;
    cout<<mini(x, y)<<endl;
    cout<<sqrt(4);
    

    // 2nd method
    // cout<<"Minimum is :"<<min(x,y)<<endl;
    // cout<<"Maximum is :"<<max(x,y);

    return 0;
}