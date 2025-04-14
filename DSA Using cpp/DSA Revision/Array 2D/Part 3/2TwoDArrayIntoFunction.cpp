#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void change1D(int a[])
{ // size mention krna zruri nhi h
    a[2] = 9;
}

void change2D(int a[3][3])
{ // size mention krna zruri  h
    a[0][0] = 9;
}
int main()
{
    int arr[] = {1, 2, 3};
    cout << arr[2] << endl;
    change1D(arr);
    cout << arr[2] << endl;

    int b[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << b[0][0] << endl;
    change2D(b);
    cout << b[0][0] << endl;
}
