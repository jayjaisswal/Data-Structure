#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // strings are mutable in cpp not in java
    string str;
    getline(cin, str);
    int n = str.length();
    reverse(str.begin(), str.begin() + n / 2);
    cout << str;
}