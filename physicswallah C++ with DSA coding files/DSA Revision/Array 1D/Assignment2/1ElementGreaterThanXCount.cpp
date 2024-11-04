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
    }
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element" << endl;
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] > x)
            count = count + 1;
    }

    cout << count;
}
