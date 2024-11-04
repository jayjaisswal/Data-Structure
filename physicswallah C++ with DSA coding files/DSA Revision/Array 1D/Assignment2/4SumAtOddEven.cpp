#include <iostream>
#include <vector>
#include <climits>
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
    cout << "Array is :" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int oddSum = 0;
    int evenSum = 0;
    int difference = 0;
    for (int i = 0; i <= size-1; i++)
   {  
     if(2*i+1<=size-1)
    oddSum = oddSum + arr[2*i+1];
    
    if(i*2<=size-1)
    evenSum =evenSum + arr[i*2];
    

   }
   difference = oddSum - evenSum;
   cout<<"odd idx sum "<<oddSum<<endl;
   cout<<"even idx sum "<<evenSum<<endl;
   cout<<"difference :"<<difference<<endl;
}
