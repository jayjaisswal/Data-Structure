#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter Your string number 0 to 9" << endl;
    cin >> s;
    sort(s.begin(), s.end());
    int m = stoi(s);
    vector<int> v;
    for (int i = 0; i < s.length(); i++)

    {
        int r = m % 10;
        v.push_back(r);
        m = m / 10;
    }
    cout << v[4];
}