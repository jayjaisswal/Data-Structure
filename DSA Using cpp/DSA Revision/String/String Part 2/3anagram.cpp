#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, s1;
    // cin >> s;
    cout << "Enter First String" << endl;
    getline(cin, s);
    cout << "Enter 2nd String" << endl;
    getline(cin, s1);
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    if (s == s1)
        cout << "Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;
}