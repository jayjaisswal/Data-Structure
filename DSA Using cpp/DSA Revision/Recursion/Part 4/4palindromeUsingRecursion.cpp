#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(string s, int i, int j){
    if(i>j) return true;
    
        if(s[i]!=s[j]) return false;
        else return isPalindrome( s,  i+1,  j-1);
       
}

int main()
{
    string s = "abba";
    cout<<isPalindrome(s,0,s.size()-1);
}
// #include <iostream>
// #include <vector>
// using namespace std;
// void isPalindrome(string s, int i, int j){
//     if(i>j) {
//         cout<<"YES";
//         return;
//     } 
    
//     if(s[i]!=s[j]) {
//         cout<<"NO";
//         return;
//     }
//     else  isPalindrome( s,  i+1,  j-1);
       
// }

// int main()
// {
//     string s = "abbjjjbbka";
//     isPalindrome(s,0,s.size()-1);
// }
