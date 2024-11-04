#include <iostream>
#include <climits>
#include <string>
using namespace std;
int main()
{
    string str[] = {"navin", "jay", "rana", "sushant", "raushan", "anksuh"};
    int n = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
                flag = false;
            }

            if (flag == true)
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
}
