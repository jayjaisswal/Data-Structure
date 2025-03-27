#include <iostream>
#include <vector>
using namespace std;
void printSubstring(string ans, string original,  vector<string>& v)
{

    if (original.length() == 0)
    {
        v.push_back(ans);
        return;
    }
    
    
    printSubstring(ans + original[0], original.substr(1), v); //ab
    printSubstring(ans, original.substr(1), v);

   
    
}

int main()
{
    vector<string> v;
    printSubstring("", "abc", v);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}