#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m;
    cout << "Enter the no of rows of square matrix: ";
    cin >> m;
    int arr[m][m];
    cout << "Enter the Elements of Matrix  " << endl;
    // input
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    //    Transpose

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j < i; j++) // or j = i+ 1;
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // print
    cout << "Transpose Of Matrix Are : " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
