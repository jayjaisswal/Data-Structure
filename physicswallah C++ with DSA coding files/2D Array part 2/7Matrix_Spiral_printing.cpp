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

    cout << endl;
    cout << endl;

    // spiral............
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;

    return 0;
}