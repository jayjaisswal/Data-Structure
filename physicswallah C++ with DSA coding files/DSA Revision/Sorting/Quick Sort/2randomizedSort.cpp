#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int partition(int arr[], int startIdx, int endIndx) {
    int randomPivotIdx = startIdx + rand() % (endIndx - startIdx + 1); // Random index
    swap(arr[randomPivotIdx], arr[endIndx]); // Move pivot to end
    int pivot = arr[endIndx];

    int i = startIdx - 1;
    for (int j = startIdx; j < endIndx; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[endIndx]); // Move pivot to correct position
    return i + 1;
}

void quickSort(int arr[], int startIdx, int endIndx) {
    if (startIdx >= endIndx) return;

    int partitionIdx = partition(arr, startIdx, endIndx);
    quickSort(arr, startIdx, partitionIdx - 1);
    quickSort(arr, partitionIdx + 1, endIndx);
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    srand(time(0)); // Seed for randomness
    quickSort(arr, 0, size - 1);

    cout << "After sorting: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
