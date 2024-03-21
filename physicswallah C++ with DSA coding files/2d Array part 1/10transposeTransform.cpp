#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the no. of rows/column :";
    cin >> m;
    cout << "enter " << m * m << " elements :" << endl;
    int arr[m][m];
    // input
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    // printing
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    // transpose in the same matrix
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // printing

    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}