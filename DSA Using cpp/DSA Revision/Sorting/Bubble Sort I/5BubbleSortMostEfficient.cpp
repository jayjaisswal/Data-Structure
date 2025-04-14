#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {5, 4, 6, 2, 3, 1};
    for (int i = 0; i < n-1; i++)
    {

        bool flag = true;
        for(int j=0;j<n-1-i;j++) // j = n-1-i
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            flag = false;
        }

        if(flag == true) break;
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

    
}
