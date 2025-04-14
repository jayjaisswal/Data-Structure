#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 5, 6, 7, 8};

    int size = 8;
    int low = 0;
    int ans = -1;
    int high = size - 1;

    //tc = O(logn)
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid)
        {
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid-1;

        }
    }
    cout<<ans;
}
