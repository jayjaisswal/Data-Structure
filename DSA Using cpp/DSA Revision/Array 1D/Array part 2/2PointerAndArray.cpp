#include <iostream>
using namespace std;
void display(int a[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    int *ptr = arr; //--> now ptr is same as arr
    // same int* ptr = &arr[0];
    cout << ptr << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;

    cout << ptr[3] << endl;

    // function me jb bhi hm array pass krte h iska mtlb hm address pass krte hai!!

    display(arr, size);
    ptr[0] = 8; // *ptr = 8 both same
    display(arr, size);

    //Another way to print the array
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++; // +4 add hoga as it is address
    }
    //last me pointer kho jayega so ushke liye it is better to write
    ptr = arr; //ptr pointing to 1st element

    cout<<endl;

    *ptr = 2; //ptr[0] = 99
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9; //2nd value will update
    ptr--; // ptr pointing to 1st element

     for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";  //i[arr] or i[ptr] or ptr[i] or *ptr 
        ptr++; 
    }

}