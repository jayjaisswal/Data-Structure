// find the smallest missing positive element in the sorted array that contain only positive elements.
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

    int x = 1;
    bool flag = false;
    for (int i = 0; i <= size - 1; i++)
    {   
        if(arr[i]<0) continue;

        if (arr[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else x++;
    }
    if (flag == false) cout<<"no missing"<<endl;

    return 0;
}