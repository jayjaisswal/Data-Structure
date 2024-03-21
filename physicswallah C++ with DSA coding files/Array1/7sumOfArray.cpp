#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements"<<endl;
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum = sum + arr[i];

    }
    cout<<"sum is :"<<sum;

return 0;
}

//by me

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[4];
//     int sum = 0;
//     for(int i=0;i<=3;i++)
//     {
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<sum;


// return 0;
// }