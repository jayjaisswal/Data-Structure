// find the minimum value out of all elements in the array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Size of Array :";
    cin >> size;
    int arr[size];
    cout << "Enter the elements" << endl;

    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 1; i <= size - 1; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<min;

    return 0;
}