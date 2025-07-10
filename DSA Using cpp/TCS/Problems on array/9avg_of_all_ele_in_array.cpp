#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;
// concept
void avg(int arr[], int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
         
    }
    cout << "avg  is: " << sum/n << endl;
}

int main() {
    int arr[] = {1,2,1,1,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    avg(arr, n);

 
    
    
    
    
    
    
}