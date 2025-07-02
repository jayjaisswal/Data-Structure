#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(5);//we have size given
    // for(int i = 0; i<5;i++)
    // {
    //     cin>>v[i];
    // }
    //  for(int i = 0; i<5;i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // if we do not have size given

    vector<int> v; // we haven't size given
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}