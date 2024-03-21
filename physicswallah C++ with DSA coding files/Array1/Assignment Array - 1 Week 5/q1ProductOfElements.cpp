// calculate thr product of all elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the Size of Array :";
    cin>>size;
    int arr[size];
    int mul=1;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
        mul*=arr[i];

    }
    cout<<"Multiplication :"<<mul;




return 0;
}