#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s-1-i; j++)//6
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
}
int main()
{
    int arr[100],s;
 cout<<"Enter size of array:"<<endl;
 cin>>s;
 cout<<"Enter unsorted array elelments:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cin>>arr[i];
 }
 cout<<"Unsorted array elelments are:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cout<<arr[i]<<" ";
 }
 bubbleSort(arr,s);
 cout<<endl<<"Sorted array elelments are:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cout<<arr[i]<<" ";
 }
return 0;
}
