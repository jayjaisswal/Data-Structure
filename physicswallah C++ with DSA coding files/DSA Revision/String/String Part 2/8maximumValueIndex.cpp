#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    // string to integer
    string str[] = {"0123", "90023", "456", "00182", "940", "2901"};
    vector<int> v;
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        int x = stoi(str[i]);
        v.push_back(x);
    }
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {

        if (max < v[i])
            max = v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {

        if (max == v[i])
            cout << i;
    }
}