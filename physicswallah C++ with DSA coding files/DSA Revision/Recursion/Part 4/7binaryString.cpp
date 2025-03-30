#include <iostream>
using namespace std;
void binaryString(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    binaryString(s+'0', n);
    if(s[s.size()-1]!= '1')  binaryString(s+'1', n);
   
}


int main()
{
    int n = 4;
    binaryString("",n);
}
