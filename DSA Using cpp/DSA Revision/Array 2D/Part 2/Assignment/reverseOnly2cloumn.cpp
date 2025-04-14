#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Matrix 1
    int m;
    cout << "Enter rows of matrix: ";
    cin >> m;
    int n;
    cout << "Enter Columns of matrix:  ";
    cin >> n;
    int arr[m][n];

    cout << "Enter " + to_string(m * n) + " Elements :" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // print
    // for (int j = 0; j < n; j++)
    // {

    //     for (int i = m - 1; i >= 0; i--)
    //     {
    //         if (j % 2 == 0)
    //             cout << arr[i][j] << " ";
    //         else
    //             cout << arr[m - 1 - i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = m - 1; i >= 0; i--)
    {

        for (int j = 0; j < n; j++)
        {
            if (j % 2 != 0)
                cout << arr[i][j] << " ";
            else
                cout << arr[m - 1 - i][j] << " ";
        }
        cout << endl;
    }
}
