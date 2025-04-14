#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v = {19, 12, 23, 8, 16};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    int c = 0;

    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX;

        for (int j = 0; j < v.size(); j++)
        {
            if (min > v[j] && v[j] > 0)
            {
                min = v[j];
                idx = j;
            }
        }
        v[idx] = c;
        c--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << -1*v[i] << " ";
    }
}
