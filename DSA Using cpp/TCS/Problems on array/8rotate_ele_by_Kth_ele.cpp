#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

// concept
void rotate(vector<int>& arr, int n, int k){
    reverse(arr.begin(), arr.begin() + k); // reverse first k elements
    reverse(arr.begin()+k, arr.end()); // reverse after k+1 ele 
    reverse(arr.begin(), arr.end()); // reverse entire array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int k = 3; // number of positions to rotate

    rotate(arr, n, k);

    
    
    
    
    
    
    
}