#include <iostream>
#include <string>
using namespace std;
int main()
{
    char k[5] = "hjug";    // --> if b take 5 vlu then we get error
    string str = "Prince"; // size 7 including null character
    cout << str << endl;

    // taking input string "only one word"
    string s;
    cin >> s;  // hi prince --> only hi will store as space is like enter
    cout << s; // o/p -> hii

    // for multiple words with spaces use getline function
    string s1;
    getline(cin, s1);
    cout << s1;
}