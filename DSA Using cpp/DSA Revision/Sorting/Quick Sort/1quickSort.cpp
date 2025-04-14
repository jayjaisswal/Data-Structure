#include <iostream>
using namespace std;
int partition(int arr[], int startIdx, int endIndx)
{
    // take first element as pivot
    int pivotElement = arr[startIdx];
    int count = 0;

     // Count elements <= pivot
    for (int i = startIdx + 1; i <= endIndx; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }
    int pivotIdx = startIdx + count; // Correct pivot index
    swap(arr[startIdx], arr[pivotIdx]);

    // arrange element smaller than pivot element to the left of it 
    // arrange element greater than pivot element to the right of it 
    int i = startIdx;
    int j = endIndx;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
            i++;
        if (arr[j] > pivotElement)
            j--;
        else if (arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }
    return pivotIdx;
}

void quickSort(int arr[], int startIdx, int endIndx)
{
    if (startIdx >= endIndx)
        return;

    int partitionIdx = partition(arr, startIdx, endIndx);

    quickSort(arr, startIdx, partitionIdx - 1);
    quickSort(arr, partitionIdx + 1, endIndx);
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}