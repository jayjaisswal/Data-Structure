#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int arr[] = {1, 2, 31, 4, 5, 17, 19, 31};
    for(int i =0;i<=7;i++){
        if(max<arr[i] ) max = arr[i];
    }
    cout<<max<<endl;

}