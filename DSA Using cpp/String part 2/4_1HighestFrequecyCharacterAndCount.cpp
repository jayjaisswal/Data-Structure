#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{   //not efficient method
    string s = "physicswallah";
    int max = 0;
    char c;
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
            c=s[i];
            
    }
   

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[j] == s[i])
                count++;
        }
       if(count==max)
       {
        cout<<ch<<" "<<max<<endl;
       }
    }

    return 0;
}