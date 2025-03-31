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
    
    printSubstring(ans, original.substr(1), v);
    printSubstring(ans + original[0], original.substr(1), v); //ab
   

   
    
}

int main()
{
    vector<string> v;
    string s = "abc";
    printSubstring("", s, v);
    for(int i =0;i<v.size();i++){
        cout << "subset is: ";
        cout<<v[i]<<endl;
    }
}