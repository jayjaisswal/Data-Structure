#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    int x = 6;
    int idx = -1;
    // method 1 forward loop Not Time efficient
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      if(v[i]==x)
    //      {
    //          idx = i;
    //      }
    //  }
    //  cout<<idx;

    // Method 2 Backward Loop Time Efficient
    for (int i = v.size(); i > 0; i--)
    {
        if(v[i]==x)
        {
            idx = i;
            break;
        }
    }
    cout<<idx;

        return 0;
}