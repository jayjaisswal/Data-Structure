#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter Elements" << endl;
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 5; i++)
    {
        cout << v[i]<<" ";
    }
}
