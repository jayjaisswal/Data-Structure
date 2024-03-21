#include <iostream>
#include <climits>
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

    int max = INT_MIN;       //-->INT_MIN is smallest number
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "First Max :" << max << endl;



    int SecondMax = INT_MIN; //-->INT_MIN is smallest number
    for (int i = 0; i < size; i++)
    {
        if (SecondMax < arr[i] && arr[i]!= max)
            SecondMax = arr[i];
    }
    cout << "Second Max :" << SecondMax;

    return 0;
}