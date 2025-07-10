#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // concept
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    cout << "\nThe smallest number in the array is: " << max << endl;
    
    
    
    
    
}