#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // // size of string
    // string c = "Prince";
    // cout << c.size() << endl;   // do not count null character
    // cout << c.length() << endl; // do not count null character

    // // push_back
    // // we can push_back only characters not string

    // c.push_back('k');
    // c.push_back('l');
    // cout << c << endl; // Princekl

    // // pop_back
    // c.pop_back();      // l remove
    // cout << c << endl; // Princek

    // // plus operator
    // string g = "abc";
    // string h = "def";
    // cout << g + h << endl; // abcdef

    // reverse
    string g = "NavinBndar";
    cout << g << endl;
    reverse(g.begin(), g.end());
    cout << g << endl;
    reverse(g.begin() + 2, g.end() - 1);
    cout << g << endl;

    // or
    string z = "NavinBndar";
    cout << z << endl;
    reverse(z.begin() + 2, z.begin() + 6);
    cout << z << endl;
}