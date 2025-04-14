#include <iostream>
#include <string>
using namespace std;
int main()
{
    // strings are mutable in cpp not in java
    string str = "Prince";
    cout << str << endl;
    str[1] = 'o';
    cout << str << endl;
}