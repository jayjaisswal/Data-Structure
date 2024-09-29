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
    // input
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print
    int max = INT_MIN;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    int max2 = INT_MIN;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (max2 < arr[i][j] && arr[i][j] != max)
                max2 = arr[i][j];
        }
    }

    cout << max2;
}
