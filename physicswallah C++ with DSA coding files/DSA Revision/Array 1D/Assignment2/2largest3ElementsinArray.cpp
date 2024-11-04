#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main()
{

    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    cout <<"Array is :"<< endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    
   
    int max =  INT_MIN;
    for (int i = 0; i <= size - 1; i++)
    {
        if(arr[i]>max) max = arr[i];  
    }
    int max2 =  INT_MIN;
    for (int i = 0; i <= size - 1; i++)
    {
        if(arr[i]>max2 && arr[i]!=max) max2 = arr[i];  
    }
    int max3 =  INT_MIN;
    for (int i = 0; i <= size - 1; i++)
    {
        if(arr[i]>max3 && (arr[i]!=max2 && arr[i]!=max)) max3 = arr[i];  
    }



    cout<<max3;

    
}
