#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Matrix 1
    int m;
    cout << "Enter rows of matrix: ";
    cin >> m;

    int arr[m][m];

    // int num = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         arr[i][j] = i + j + 1 + num;
    //     }
    //     num = num + m - 1;
    // }

    // or

    int num = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = num;
            num++;
        }
    }

    // print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int cmin = 0, rmin = 0;
    int cmax = m - 1, rmax = m - 1;
    while (cmin <= cmax && rmin <= rmax)
    {
        if (cmin >= cmax && rmin >= rmax)
    }
}