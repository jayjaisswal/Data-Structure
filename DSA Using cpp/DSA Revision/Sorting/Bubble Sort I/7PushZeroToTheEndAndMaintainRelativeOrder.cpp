#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n = 11;
    int arr[n] = {5, 0, 6, 0, 3, 1, 0, 7, 0, 9, 0};
    for (int i = 0; i < n-1; i++)
    {

        bool flag = true;
        for(int j=0;j<n-1-i;j++) // j = n-1-i
        if(arr[j]==0)
        {
            
        
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            flag = false;
        

        if(flag == true) break;
        }
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

    
}
