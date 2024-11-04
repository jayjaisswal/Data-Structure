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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count = count + 1;
        }
    }
    cout << count;
}
