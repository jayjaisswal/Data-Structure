#include<iostream>
using namespace std;
int main(){
    int arr[3][3]; //declaration
    int arr1[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}};
    cout<<arr1[1][2]<<endl;
    cout<<arr1[2][0]<<endl;
    for(int i = 0;i<=2;i++){
        for(int j = 0;j<=2;j++){
            cout<<arr1[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
