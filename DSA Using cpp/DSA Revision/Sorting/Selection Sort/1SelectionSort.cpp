#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {9, 3, 10, 5, 8, 2, 1};
    int size = 7;

    for (int i = 0; i <= size - 2; i++)
    {
        int min = INT_MAX;
        int idx = -1;
        for (int j = i; j < size ; j++)
        {

            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
        }

        swap(arr[i], arr[idx]);
    }

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}