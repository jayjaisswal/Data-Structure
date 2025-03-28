// doubt recursion 2:22:02
#include <iostream>
#include <vector>
using namespace std;
void printSubstring(string ans, string original,  vector<string>& v, bool flag)
{

    if (original.length() == 0)
    {
        v.push_back(ans);
        return;
    }
    
    char ch = original[0];
    
    if(original.length()==1){
        if(flag == true) printSubstring(ans + ch, original.substr(1), v, true);
        printSubstring(ans, original.substr(1), v,true);
        return;

    }
    char dh = original[1];
    if(ch==dh){
        if(flag == true) printSubstring(ans + ch, original.substr(1), v, true);
        printSubstring(ans, original.substr(1), v, false);

    }else{

        if(flag == true) printSubstring(ans + ch, original.substr(1), v, true);
        printSubstring(ans, original.substr(1), v, true);

    }
   
}

int main()
{
    vector<string> v;
    printSubstring("", "aab", v, true);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}