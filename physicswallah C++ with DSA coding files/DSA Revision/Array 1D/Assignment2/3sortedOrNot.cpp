#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{

    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is :" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool b = false;
    for (int i = 0; i <= size - 2; i++)   // size - 1 out of bound hona chahiye (Doubt)
    {
        if (arr[i] < arr[i + 1])
            b = true;
        else
            b = false;
    }
    if (b == true)
        cout<<"Sorted";
        else
        cout<<"Not sorted";
}
