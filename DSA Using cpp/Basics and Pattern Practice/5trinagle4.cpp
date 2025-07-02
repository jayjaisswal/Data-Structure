#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n = 7;
    for (int i = 1; i<= 2*n-1; i++)
    {
        int col = i < n ? i :  2*n - i;
        for (int j = 1; j <= col; j++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }
}