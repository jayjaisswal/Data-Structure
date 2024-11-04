#include <iostream>
using namespace std;
int main()
{
    string str;
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    cout << "Enter String" << endl;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }
    cout << str;
}
