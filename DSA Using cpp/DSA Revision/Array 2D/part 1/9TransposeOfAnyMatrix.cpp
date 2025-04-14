#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m;
    cout << "Enter the no of rows: ";
    cin >> m;
    int n;
    cout << "Enter the no of Column: ";
    cin >> n;
    int arr[m][n];
    cout << "Enter the Elements of Matrix  " << endl;
    // input
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    //    Transpose
    int transpose[n][m];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

    // print
    cout << "Transpose Of Matrix Are : " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}
