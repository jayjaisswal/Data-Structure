#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}