#include <iostream>
using namespace std;
int main()
{
    //matrix 1
    cout<<"for matrix 1"<<endl;
    int m; // rows
    cout << "Enter the no. of rows :";
    cin >> m;
    int n; // column
    cout << "Enter the no. of columns :";
    cin >> n;
    cout<<"enter elements :"<<m*n <<endl;
    int arr[m][n];
    // input
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
            cin >> arr[i][j];
        }
    }
    cout<<"enter the elements of matrix 2 :"<<m*n<<endl;
    int arr2[m][n] ;
    //matrix 2
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
            cin >> arr2[i][j];
        }
    }
    
    //sum
    int sum[m][n];
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
           sum[i][j] = arr[i][j]+arr2[i][j] ;
        }
    }

    // printing sum
    cout<<"sum is"<<endl;
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < n; j++) // j-->is for coumn
        {
           cout<< sum[i][j] <<" ";
        }
        cout<<endl;
    }

    //Another method
    // int sum[m][n];
    // for (int i = 0; i < m; i++) // i-->is for rows
    // {
    //     for (int j = 0; j < n; j++) // j-->is for coumn
    //     {
    //        cout<< arr[i][j]+arr2[i][j]<<" " ;
    //     }
    //     cout<<endl;
    // }

    //Another method
    //using for loop
    //arr[i][j]=arr[i][j]+arr1[i][j];
    //printing arr[i][j];







    return 0;
}