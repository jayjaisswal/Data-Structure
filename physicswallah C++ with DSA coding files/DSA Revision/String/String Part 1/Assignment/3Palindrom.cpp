#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // string str;
    // cout << "Enter String" << endl;
    // cin >> str;
    // string prev = str;
    // reverse(str.begin(), str.end());
    // if (str == prev)
    //     cout << "Palindrom";
    // else
    //     cout << "Not Palindrom";

    string str;
    cout << "Enter String" << endl;
    cin >> str;
    string prev = str;
    string reverse = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reverse = reverse + str[i];
    }

    if (reverse == prev)
        cout << "Palindrom";
    else
        cout << "Not Palindrom";
}