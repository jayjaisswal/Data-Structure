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
    // store the transpose //leetcode Q. NO.867
    int t[n][m];
     for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            t[i][j]=arr[j][i];
            
        }
        
    }
    //printing
     
     for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout<<t[i][j]<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}