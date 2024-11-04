#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 5, 5, 5, 5, 5, 7, 8, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 9;

    bool flag = false;
    int low = 0;
    int high = size - 1;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)

        {
            if (mid == size - 1)
            {
                flag = true;
                cout << -1;
                break;
            }
            if (arr[mid + 1] != x)
            {
                flag = true;
                cout << arr[mid + 1];
                break;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    if (flag == false)

        cout << arr[low];

    return 0;
}
