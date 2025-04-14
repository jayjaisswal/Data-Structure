#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int i = 10;
    // int count = 0;
    // int k = 0;

    //     // Merge nums1 and nums2 from the back
    //     while (count <= 20 ) {
    //        count++;

    //     }

    //     cout<<count<<endl;
    //     cout<<k;
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 1; k < i + 1; k++)
    //     {

    //         cout << " " << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i< n; i++){
        for (int j = 0; j < n ; j++)
        {
            if(j<i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;

    }
}
