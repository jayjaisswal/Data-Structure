#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Matrix 1
    int m;
    cout << "Enter the  rows of 1st matrix: ";
    cin >> m;
    int n;
    cout << "Enter the  Columns of 1st matrix: ";
    cin >> n;

    // Matrix 2
    int p;
    cout << "Enter the  rows of 2nd matrix: ";
    cin >> p;
    int q;
    cout << "Enter the  Columns of 2nd matrix: ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout << "Enter " + to_string(m * n) + " Elements in 1st Matrix" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        int b[p][q];
        cout << "Enter " + to_string(p * q) + " Elements in 2nd Matrix" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        // resultant Matrix
        int res[m][q];
        cout << "Resultant Matrix" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // Multiplication
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {

                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "The MAtrix Cannot be Multiplied";
    }
}
