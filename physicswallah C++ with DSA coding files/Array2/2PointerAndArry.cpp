#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 8, 9, 2};
    int *ptr = arr; // arr <--> &arr[0]   giving address
    cout << ptr << endl;

    // 1st way to print elements of array/..........

    // for(int i = 0 ; i<5;i++)
    // {
    //     cout<<ptr[i]<<" ";  //ptr[i] <--> i[ptr] <--> i[arr]
    // }

    // 2nd way to print elements of thr array...........

    // for(int i = 0 ; i<5;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // ptr = arr; // ptr Pointing to 1st element

    // ptr[0] = 8 <--> *ptr = 8  both are same and will update the zeroth index

    *ptr = 4; // ptr[0] = 8
    ptr++;    // ptr is pointing to second element
    *ptr = 3;
    ptr--; // ptr Pointing to 1st element
    for(int i = 0 ; i<5;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr Pointing to 1st element

    return 0;
}