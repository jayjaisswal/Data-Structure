#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    cout << "Enter String" << endl;
    cin >> str;
    // reverse(str.begin() + 0, str.begin() + n / 2);
    reverse(str.begin() + n / 2, str.end());
    cout << str;
}
