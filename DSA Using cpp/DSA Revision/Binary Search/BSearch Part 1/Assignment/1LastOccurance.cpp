#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    bool flag = false;
    int low = 0;
    int high = size - 1;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {

            if (mid == size - 1 || arr[mid] != arr[mid + 1])
            {
                flag = true;
                cout << mid;
                break;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (!flag)
    {
        cout << "Element is not found";
    }

    return 0;
}
