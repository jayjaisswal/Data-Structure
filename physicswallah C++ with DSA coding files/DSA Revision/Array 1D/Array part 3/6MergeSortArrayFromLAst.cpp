#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>& nums1, int m,  vector<int>& nums2, int n)
{
    int i = m - 1;  // Pointer for the end of valid elements in nums1
    int j = n - 1;  // Pointer for the end of nums2
    int k = m + n - 1;  // Pointer for the end of nums1

    // Merge nums1 and nums2 from the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them over to nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main()
{
    vector<int> arr1 = {1, 4, 5, 8, 0, 0, 0};  // 4 initial elements and 3 zeros for space
    vector<int> arr2 = {10, 12, 13};  // Elements to be merged

    display(arr1);
    display(arr2);

    merge(arr1, 4, arr2, 3);  // 4 valid elements in arr1, 3 elements in arr2

    display(arr1);  // Display the merged array

    return 0;
}
