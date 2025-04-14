#include <iostream>
using namespace std;
int main()
{
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
    int sum=0;
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
           sum=sum+arr[i][j];
        }
    }
    cout<<sum;

    return 0;
}