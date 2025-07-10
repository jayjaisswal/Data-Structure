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

    // concept first min element
    int min = INT_MAX;
    int min2 = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i]<min){
            min=arr[i];
        }
        
    }

    // concept first max element
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    for(int i = 0; i < n; i++) {
        if(arr[i]<min2 && arr[i]!=min){  // concept 2nd min element
            min2=arr[i];
        }
        if(arr[i]>max2 && arr[i]!=max){ // concept 2nd max element
            max2=arr[i];
        }
        
    }
    cout << "\nThe 2nd smallest number in the array is: " << min2 << endl;
    
    cout << "\nThe 2nd smallest number in the array is: " << max2 << endl;
    
    
    
    
    
}