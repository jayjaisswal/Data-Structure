#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No of Sides :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   //space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k; //add space and see magic
        }
        cout<<endl;
    }

    return 0;
}