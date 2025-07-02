// given an array, predict if the array contains duplicate or not.

// my way
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
    int count = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        // if (count > 0)
        //     break;
    }
    if (count > 0)
        cout << "duplicate";
    else
        cout << "not dublicate";

    return 0;
}
