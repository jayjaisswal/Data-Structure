#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of string" << endl;
    cin >> n;
    string s;
    cout << "Enter Your string" << endl;
    cin >> s;
    string original = s;
    reverse(s.begin(), s.end());
    cout << original + s;
}