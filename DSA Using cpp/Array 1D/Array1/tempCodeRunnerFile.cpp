#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    cout << "Enter element you want to search : " << endl;
    int x;
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index :" << i << endl;
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Element not found";
    }
    return 0;
}