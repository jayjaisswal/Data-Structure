#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        if (arr[mid] == mid)
        {
            if (arr[mid] == arr[mid - 1])
            {
                cout << arr[mid];
                break;
            }
            else
                high = mid - 1;
        }
    }
}
