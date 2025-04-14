#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "abba";
    cout<<isPalindrome(s);
}
