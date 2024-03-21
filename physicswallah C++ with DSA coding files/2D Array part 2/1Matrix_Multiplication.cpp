#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of rows of 1st matrix :";
    cin >> m;
    int n;
    cout << "Enter number of columns of 1st matrix :";
    cin >> n;

    int p;
    cout << "Enter number of rows of 2nd matrix :";
    cin >> p;
    int q;
    cout << "Enter number of columns of 2nd matrix :";
    cin >> q;
    if (n == p)
    {
        cout << "Enter " << m * n << " Elements of 1st matrix :" << endl;
        int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }


        cout << "Enter " << p * q << " Elements of 2nd matrix :" << endl;
        int b[p][q];
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            { // multiplication-->res[i][j]=a[i][0]*b[0][j]+a[i][1]+b[1][j]...
                res[i][j] = 0;
                for (int k = 0; k < p; k++) // k<p or k<n as n==p
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout<<endl;
        cout<<"resultant Matrix is :"<<endl;
        // printing
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j]<<" ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication is not possible .";
    }

    return 0;
}