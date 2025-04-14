// strs = ["flower","flow","flight"]
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    // string to integer
    vector<string> str = {"flower", "flow", "flight"};

    sort(str.begin(), str.end());

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
}