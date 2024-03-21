#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "physicswallah";
    int max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[j] == s[i])
                count++;
        }
        if (max < count)
            max = count;
    }
    cout << max;

    return 0;
}