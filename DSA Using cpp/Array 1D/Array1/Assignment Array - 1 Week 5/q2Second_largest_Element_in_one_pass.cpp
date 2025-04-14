// find the second largest element in given array in one pass.
#include <iostream>
#include <climits>
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

    int mx = INT_MIN;
    int smx = INT_MIN;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] > mx)
        {
            smx = mx;
            mx = arr[i];
        }
        else if (smx < arr[i] && arr[i] != mx)
        {
            smx = arr[i];
        }
    }
    cout << mx << endl;
    if (smx == INT_MIN)
        cout << "No second largest exist";
    else
        cout << smx << endl;

    return 0;
}