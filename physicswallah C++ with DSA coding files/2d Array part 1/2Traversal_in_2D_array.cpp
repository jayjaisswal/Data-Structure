#include <iostream>
using namespace std;
int main()
{
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i = 0; i <= 2; i++)//i-->is for rows
    // {
    //     for(int j = 0;j<=2;j++)//j-->is for coumn
    //     {
    //         cout<<arr[i][j]<<" ";

    //     }
    // }

    int m; // rows
    cout << "Enter the no. of rows :";
    cin >> m;
    int n; // column
    cout << "Enter the no. of columns :";
    cin >> n;
    int arr[m][n];
    // input
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
            cin >> arr[i][j];
        }
    }

        // output
        for (int i = 0; i < m; i++) // i-->is for rows
        {
            for (int j = 0; j < n; j++) // j-->is for coumn
            {
               cout<< arr[i][j]<<" ";
            }
            cout<<endl;
        }
            return 0;
        }