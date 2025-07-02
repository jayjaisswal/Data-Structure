#include <iostream>
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
    // Linear Search
    // Check Mark
    bool flag = false; //-->Element not present
    int data;
    cout << "Enter Element you Want to Search" << endl;
    cin >> data;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == data)
            flag = true;
    }
    if (flag == true)
        {
        cout << "Element Present"<<endl;
        int count = 0;
        for(int i = 0; i<size;i++)
        {
            if(arr[i]>data)
            count++;
        }
        cout<<count;
        }
    else
        cout << "Not present"<<endl;
        
    
    return 0;
}