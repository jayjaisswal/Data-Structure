#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string str = "raghav is an  an  maths   teacher. raghav is  dsa mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> s;
    while (ss >> temp)
    {
        s.push_back(temp);
    }
    sort(s.begin(), s.end());
    int max = 1;
    int count = 1;
    for (int i = 0; i < s.size()-1; i++)
    {

        if (s[i] == s[i + 1])
            count++;
        else
            count = 1;
        if (max < count)
            max = count;
    }

    count = 1;
    for (int i = 0; i < s.size()-1; i++)
    {

        if (s[i] == s[i + 1])
            count++;
        else
            count = 1;
        if (max == count)
            cout << max << " " << s[i] << endl;
    }
}