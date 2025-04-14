#include <iostream>
using namespace std;
int main()
{
    int nums[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int size = 9;
    int target = 150;
    bool flag = false;
    int low = 0;
    int high = size - 1;
    while (high >= low)
    {
        // int mid = (low + high)/2;
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            cout << "found";
            flag = true;
            break;
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }
    if (flag == false)
        cout << "Not Found";
}