#include <iostream>
using namespace std;
int main()
{
    // int arr[7]; //Declaration
    // arr[0] = 9; //initilization
    // arr[1] = 8;
    // arr[2] = 7;
    // arr[3] = 6;
    // arr[4] = 5;
    // arr[5] = 4;
    // arr[6] = 3;
    // arr[7] = 2;

    // another way
    // int arr[] = {2, 3, 4, 5, 6, 7, 8}; agr size nhi dete hai to initilization krna compulsory hai
    int arr[7] = {2, 3, 4, 5, 6, 7, 8}; // Declaration & initilization


    //taking input
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        cin>>arr[i];
    }


    // priting the elements using for loop
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        cout << arr[i] << " ";
    }
}