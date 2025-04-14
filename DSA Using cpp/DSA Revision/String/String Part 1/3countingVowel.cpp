#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Prince";
    int count = 0;
    cout << str << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }

    cout << count;
}