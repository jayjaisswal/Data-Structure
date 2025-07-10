#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    // concept to reverse an array
    // using two pointer approach
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    // method 2 to reverse an array print from last to first
    cout <<"\n method 2"<< endl;
    int ans[n];
    int k = 0;
    for(int i = n-1;i>=0;i--){
        ans[k] = arr[i];
        k++;
    }

    for(int i = 0;i<n;i++){
        cout << ans[i] << " ";
    }
}