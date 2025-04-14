#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    // v.at(2) = 90;
    // cout<<v.at(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout<<endl;
    //sort
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout<<endl;

    return 0;
}