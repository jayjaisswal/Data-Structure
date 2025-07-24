#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countUniqueTriplets(vector<int>& arr, int x) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate i
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == x) {
                count++;

                // Move both pointers and skip duplicates
                int leftVal = arr[left], rightVal = arr[right];
                while (left < right && arr[left] == leftVal) left++;
                while (left < right && arr[right] == rightVal) right--;
            }
            else if (sum < x) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 3, 1};
    int x = 9;

    cout << "Number of unique triplets with sum " << x << ": " << countUniqueTriplets(arr, x) << endl;
    return 0;
}
