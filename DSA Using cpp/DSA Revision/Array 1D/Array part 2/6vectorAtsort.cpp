#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);

    //   cout<<v.at(2)<<endl;
    //   cout<<v[2]<<endl;

    //   v.at(2) = 9;

    //   cout<<v.at(2)<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // sort
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}
