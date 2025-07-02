#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << &arr << endl;    // 0x61fefc
    cout << arr << endl;     // 0x61fefc
    cout << &arr[0] << endl; // 0x61fefc
    cout << &arr[1] << endl; // 0x61ff00
    cout << &arr[2] << endl; // 0x61ff04
    cout << &arr[3] << endl; // 0x61ff08
    cout << &arr[4] << endl; // 0x61ff0c

    return 0;
}