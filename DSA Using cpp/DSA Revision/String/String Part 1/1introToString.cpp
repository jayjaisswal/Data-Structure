#include <iostream>
using namespace std;
int main()
{
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << str << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;
    // cout << str;

    char str1[5] = "abcd"; // how?
    cout << str1 << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << str1[i] << " ";
    }

    // typecast

    char c = 'a';
    cout << (int)c << endl;

    char nullchar = '\0';
    cout << (int)nullchar << endl; // ASCII --> 0

    cout << (int)(str[5]); // confirm \0

    cout << endl;

    char str3[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; str3[i] != '\0'; i++)
    {
        cout << str3[i] << " ";
    }

    cout << endl;

    cout << str3;
}