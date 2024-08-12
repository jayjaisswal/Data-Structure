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
    int x;
    cout<<"Write an element you want to check"<<endl;
    cin>>x;
    bool flag = false;
    for (int i = 0; i <= size-1; i++)
    {
        if(x==arr[i]) flag = true;
        
    }
    if(flag == true) cout<<"Present";
    else cout<<"Not Present";
 
}
