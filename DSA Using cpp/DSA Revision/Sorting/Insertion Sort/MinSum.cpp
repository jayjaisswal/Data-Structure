// // no of operation is more

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {9, 3, 7, 5, 8, 2, 1};
    int size = 7;

   for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {

            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    // for (int i = 0; i <= size - 1; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int digit = 0;
    for (int i = 0; i < size; i++)
    {
        digit = (digit * 10) + arr[i];
    }
    cout << digit << endl;

    
        int j = size - 1;
        while (j >= 1)
        {
            if (arr[j - 1] < arr[j])
            {
                swap(arr[j], arr[j - 1]);

                break;
            }
            else
                j--;
        }
    

    int digit1 = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        digit1 = (digit1 * 10) + arr[i];
    }
    cout << digit1 << endl;

    cout << digit + digit1;
}
