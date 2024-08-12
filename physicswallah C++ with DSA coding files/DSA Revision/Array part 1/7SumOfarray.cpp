#include <iostream>
#include <climits>
using namespace std;
int main()
{
  
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    int arr[size];
    for (int i = 0; i <= size-1; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i <= size-1; i++)
    {
        sum = sum + arr[i];
    }

    cout<<sum;
 
}
