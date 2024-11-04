#include <iostream>
#include <vector>
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
        cout << arr[i] << " ";
    }
}
