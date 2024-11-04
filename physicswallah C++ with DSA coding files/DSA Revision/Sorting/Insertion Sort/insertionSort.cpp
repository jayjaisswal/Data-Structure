#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {9, 3, 10, 5, 8, 2, 1};
    int size = 7;

    // insertion sort
    // for (int i = 1; i <= size - 1; i++)
    // {

    //     for (int j = i - 1; j >= 0; j--)
    //     {

    //         if (arr[j] > arr[i])
    //         {
    //             swap(arr[i], arr[j]);
    //             i--;
    //         }
    //         else
    //             break;
    //     }
    // }

    // or
    // for (int i = 1; i < size; i++)
    // {
    //     int j = i;
    //     while(j>=1){
    //         if(arr[j]>=arr[j-1] ) break;
    //         else swap(arr[j], arr[j-1]);
    //         j--;
    //     }

    // }

    // or
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {

            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}