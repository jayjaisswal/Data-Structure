#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[6] = {5, 4, 6, 2, 3, 1};
    for (int i = 0; i < 5; i++)
    {
        for(int j=0;j<5;j++)
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    for (int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<" ";
    }

    
}
