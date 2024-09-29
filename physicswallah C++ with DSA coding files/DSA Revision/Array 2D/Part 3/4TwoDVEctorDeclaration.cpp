#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void change2DVector(vector<vector<int>> &v)
{ // size mention krna zruri nhi h
    v[0][0] = 9;
}

void size(vector<vector<int>> &v)
{
    cout << v.size() << endl;
}
int main()
{
    vector<vector<int>> v(3, vector<int>(4, 2));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << v.size() << endl;    // rows
    cout << v[0].size() << endl; // columns
}
