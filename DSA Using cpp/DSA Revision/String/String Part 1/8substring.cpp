#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // strings are mutable in cpp not in java
    string s = "abcdef";
    cout << s.substr(2, 2) << endl; // s.substr(idx, len)
    cout << s.substr(2);            // s.substr(idx)
}