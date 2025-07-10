#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9, 12};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // for odd length
    sort(arr.begin(), arr.begin() + n / 2);                       // sort first half in increasing order
    sort(arr.begin() + (n + 1) / 2, arr.end(), greater<int>()); // sort second half in decreasing order
    

    // for even length
    // sort(arr.begin(), arr.begin() + n / 2);                       // sort first half in increasing order
    // sort(arr.begin() + n / 2, arr.end(), greater<int>()); // sort second half in decreasing order
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}