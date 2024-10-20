#include <iostream>
using namespace std;
int main()
{
    int nums[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    // TC = O(n)
    // for(int i =0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    // using binary search we have TC = O(logn)

    int size = 18;
    int x = 7;
    bool flag = false;
    int low = 0;
    int high = size - 1;
    while (high >= low)
    {

        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            flag = true;
            cout << nums[mid + 1];
            break;
        }
        else if (nums[mid] > x)
            high = mid - 1;
        else if (nums[mid] < x)
            low = mid + 1;
    }
    if (flag == false)
        cout << nums[low];
}
