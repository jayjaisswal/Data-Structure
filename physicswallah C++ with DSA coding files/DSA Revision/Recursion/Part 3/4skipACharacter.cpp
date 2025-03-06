// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {   // want to skip character 'a'
//     string str = "jay kumar";
//     string s = "";
//     for(int i =0;i<=str.length()-1;i++){
//         if(str[i] != 'a') s += str[i];
//     }
//     cout<<s<<endl;
// }

// recursively

// #include <iostream>
// #include <string>
// using namespace std;
// void skipACharacter(string s, int idx, string res)
// {
//     if (s.length() == idx)
//     {
//         cout << res << endl;
//         return;
//     }
//     if (s[idx] != 'a')
//         res += s[idx];

//     skipACharacter(s, idx + 1, res);
// }
// int main()
// {
//     string s = "jay kumar";
//     skipACharacter(s, 0, "");
// }




// recursively

#include <iostream>
#include <string>
using namespace std;
void skipACharacter(string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='a') skipACharacter(ans,original.substr(1));
    else skipACharacter(ans+ch,original.substr(1));
}

int main()
{
    string s = "jay kumar";
    skipACharacter( "", "physics wallah");
}