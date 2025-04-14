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
    cout << "Enter the Elements of Matrix 1 " << endl;
    // input
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr2[m][n];
    cout << "Enter the Elements of Matrix 2 " << endl;
    // input
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Add
    int sum[m][n];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // print
    cout << "Enter the Elements of Matrix 2 " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}
