#include <iostream>
#include <string>
using namespace std;
int main()
{
    // strings are mutable in cpp not in java
    // int n;
    // cout << "size " << endl;
    // cin >> n;
    // string c[n];
    // cout << "Character" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> c[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         c[i] = 'a';
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << c[i] << " ";
    // }

    // using character
    int n;
    cout << "size " << endl;
    cin >> n;
    char c[n];
    cout << "Character" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = 'a';
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
}