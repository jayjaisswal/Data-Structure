#include <iostream>
using namespace std;
int partition(int arr[], int startIdx, int endIndx)
{
    int pivotElement = arr[(startIdx + endIndx)/2];
    int count = 0;

     // Count elements <= pivot
    for (int i = startIdx; i <= endIndx; i++)
    {
        if(i==(startIdx + endIndx)/2) continue;
        if (arr[i] <= pivotElement)
            count++;
    }
    int pivotIdx = startIdx + count; // Correct pivot index
    swap(arr[(startIdx + endIndx)/2], arr[pivotIdx]);
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

int KthSmallest(int arr[], int startIdx, int endIndx, int k)
{
    

    int partitionIdx = partition(arr, startIdx, endIndx);
    if(partitionIdx+1==k) return arr[partitionIdx];
    else if(partitionIdx+1<k) return KthSmallest(arr, partitionIdx+1, endIndx, k);
    else return KthSmallest(arr, startIdx, partitionIdx-1, k);
    
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
    int k = 6; //3rd smallest element i want
    cout<<KthSmallest(arr, 0, size - 1, k);
   
}