// printing Array Element Using Recursion
#include<iostream>
#include<vector>
using namespace std;
// Array
void print(int arr[], int size, int idx){
    if(idx>size-1) return;
    cout<<arr[idx]<<" ";
    print(arr, size,idx+1 );
}

// vector
void print2( vector<int>& v, int idx){
    
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    print2(v,idx+1);

}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size,0);

    // vector
    cout<<endl;
    vector<int> v(5);
    for(int i = 0;i<size;i++){
        v[i] = arr[i];
    }
    
    print2(v, 0);
}