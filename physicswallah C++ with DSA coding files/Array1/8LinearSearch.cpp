#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter Elements" << endl;
    for (int i = 0; i <=size-1; i++)
    {
        cin >> arr[i];
    }
    // Linear Search
    // Check Mark
    bool flag = false; //-->Element not present
    int x;
    cout << "Enter Element you Want to Search" << endl;
    cin >> x;
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
           { flag = true;
            a=i;
           }
    }
    if (flag == true)
        cout << "Element Present :"<<a;
    else
        cout << "Not present";
    return 0;
}


//by me
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
//     int flag = 0;
//     cout << "Enter element you want to search : " << endl;
//     int x;
//     cin >> x;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == x)
//         {
//             cout << "Element found at index :" << i << endl;
//             flag++;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "Element not found";
//     }
//     return 0;
// }