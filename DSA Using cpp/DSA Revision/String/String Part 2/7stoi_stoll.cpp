#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    // string to integer
    string str = "123456";
    int x = stoi(str);
    cout << x + 1 << endl;
    ;

    // for long long
    string str2 = "123456789";
    int y = stoll(str2);
    cout << y + 1 << endl;
    ;
}