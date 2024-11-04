#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
using namespace std;
int main()
{
    string str = "AZYZXBDJKX";
    vector<char> s;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'X')
            s.push_back(str[i]);
    }

    // sort(s.begin(), s.end());

    int m = s.size();
    for (int i = 0; i < m - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < m - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
}
