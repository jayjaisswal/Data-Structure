#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str = "Ragav is a maths teacher. He is a DSA mentor as well!.";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp); // storing string in vector
    }

    // vector print
    //  for(int i=0;i<v.size();i++)
    //  {
    //      cout<<v[i]<<endl;
    //  }
    // cout<<endl;

    sort(v.begin(), v.end()); // so that there is no need to compare one word with all other words.

    // vector print
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    // cout << endl;

    // calcuting no. of  times the word has occured

    int maxCount = 1;
    int Count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            Count++;
        else
            Count = 1;

        if (maxCount < Count)
            maxCount = Count;
    }

    ////finding that word........
    Count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            Count++;
        else
            Count = 1;

        if (maxCount == Count)
            cout << v[i] << " " << maxCount << endl;
    }

    return 0;
}