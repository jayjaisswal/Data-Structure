#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // to_string() it is use to convert int to string
    int x = 12345;
    string s = to_string(x);
    cout << s << endl;
    cout << s.length() << endl; // without loop we are finding no of digits
}