#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of rows of 1st matrix :";
    cin >> m;
    int n;
    cout << "Enter number of columns of 1st matrix :";
    cin >> n;

    cout << "Enter " << m * n << " elements" << endl;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // column wise wave print
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i <m; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {

            for (int i = m-1; i >=0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
} // do not get confused as indexing is starting from zero so 1st row and 3rd row will be even