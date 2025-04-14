#include <iostream>
#include <vector>
using namespace std;
void combinationSum(int arr[], int n, int target, int idx, vector<int> v){
    if(target == 0){
        for(int i =0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combinationSum(arr, n, target-arr[i], i, v );
        v.pop_back();
    }

}


int main()
{
    int arr[] = {2,3,5};
    int target = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    combinationSum(arr, n, target, 0, v );
}
