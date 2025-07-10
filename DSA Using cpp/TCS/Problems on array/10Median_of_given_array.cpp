#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
lkj
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 6, 3, 4, 2};
    int n = arr.size();
    sort(arr.begin(), arr.end()); // sort the array to find median
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    double ans = 0;

    if (n % 2 == 0)
    {
        ans = (arr[n / 2] + arr[(n / 2) + 1])/2;
    }else{
        ans = arr[(n / 2)+1];
    }

    cout << "\nThe median of the array is: " << ans << endl;
}