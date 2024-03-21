// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "Enter size of array" << endl;
//     cin >> size;
//     int arr[size];
//     cout << "Enter Elements" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
   
//    int max = arr[0];
//    for(int i = 1; i<size ; i++)
//    {
//     if(max<arr[i])
//     max = arr[i];
//    }
//    cout<<max;
//     return 0;
// }

//another way...............
#include <iostream>
#include<climits>
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
   
   int max = INT_MIN; //doubt
   for(int i = 0; i<size ; i++)
   {
    if(max<arr[i])
    max = arr[i];
   }
   cout<<max;
    return 0;
}