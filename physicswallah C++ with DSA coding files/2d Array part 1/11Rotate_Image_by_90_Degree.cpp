#include <iostream>
using namespace std;
int main()
{

    int m;
    cout << "Enter the no. of rows/column :";
    cin >> m;
    cout << "enter " << m * m << " elements :" << endl;
    int matrix[m][m];
    // input
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    cout << endl;
    // printing
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            // swap i,j and j,i
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // reverse each rows
    for (int k = 0; k < m; k++) // traversing  each rows
    {
        int i = 0;     // starting column
        int j = m - 1; // Last column
        while (i <= j)
        {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
    cout << endl;
    cout << endl;

    // printing 90 Degree rotated image of square matrix
    for (int i = 0; i < m; i++) // i-->is for rows
    {
        for (int j = 0; j < m; j++) // j-->is for coumn
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}