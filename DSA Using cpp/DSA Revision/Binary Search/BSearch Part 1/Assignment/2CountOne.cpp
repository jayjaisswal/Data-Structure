#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 0;

    bool flag = false;
    int low = 0;
    int high = size - 1;
    int idx = -1;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            
            if (arr[mid] != arr[mid + 1])
            {
                flag = true;
                cout<<size - mid -1;
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
    

    if (flag == false)
    {
        cout << "0";
    }

    return 0;
}

