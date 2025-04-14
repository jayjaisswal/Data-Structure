#include <iostream>
using namespace std;
int main()
{
    cout << "for matrix 1" << endl;
    int m; // rows
    cout << "Enter the no. of rows :";
    cin >> m;
    int n; // column
    cout << "Enter the no. of columns :";
    cin >> n;
    cout << "enter "<<m * n <<" elements :" <<  endl;
    int arr[m][n];
    // input
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
            cin >> arr[i][j];
        }
    }
    //printing
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose
     for (int j = 0; j < n; j++) // i-->is for rows
    {
        for (int i = 0; i < m; i++) // j-->is for coumn
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}