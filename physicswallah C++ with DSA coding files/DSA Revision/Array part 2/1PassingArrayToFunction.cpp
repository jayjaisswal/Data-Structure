#include<iostream>
using namespace std;
void display(int a[], int size){  // int a[] aur int* a dono same h 
    for(int i = 0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[], int size){
  b[0] = 100;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    //accessing the element of array in function
    //updation, Note: Array is pass by reference
    display(arr, size);
    change(arr, size);
    display(arr, size);

}