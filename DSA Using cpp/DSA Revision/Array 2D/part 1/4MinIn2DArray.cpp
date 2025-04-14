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
    int min = INT_MAX;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }

    cout << min;
}
