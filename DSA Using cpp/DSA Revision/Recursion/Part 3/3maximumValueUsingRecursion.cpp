#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void maximum(vector<int> &v, int idx, int max)
{
    if (idx == v.size())
    {
        cout << max << endl;
        return;
    }
    if (v[idx] > max)
        max = v[idx];
    maximum(v, idx + 1, max);
}
int maxInArray(vector<int> &v, int idx)
{
    if (idx == v.size()){
        return INT_MIN;
    }
    return max(v[idx], maxInArray(v, idx + 1));

}

int main()
{
    int arr[5] = {1, 2, 30, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // vector
    cout << endl;
    vector<int> v(5);
    for (int i = 0; i < size; i++)
    {
        v[i] = arr[i];
    }

    // maximum(v, 0, INT_MIN);
    // cout<<endl;
    // cout<<maximumValStore(v, 0, INT_MIN);
    cout<<maxInArray(v,0);
}