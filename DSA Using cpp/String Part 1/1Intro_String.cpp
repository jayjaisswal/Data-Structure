#include <iostream>
using namespace std;
int main()
{
 char str[6] = {'a', 'b', '\0','c', 'd', 'e'};
   
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }

    cout<<str;

    // cout << str[5];
    // cout << (int)(str[5]);

    //    char str[5]= "abcd";
    //    for(int i=0;i<5;i++){
    //         cout<<str[i]<<" ";
    //     }

    // char ch = '\'; --> backward slash is a special character & throw error.
    // cout<<ch;

    //  char ch = '\0'; //-->NULL character
    //  cout<<ch;
    //  cout<<(int)ch; //-->ASCII value is 0.
    // null character is used to termination purpose.
    // e.g., given above
    //   char str[]= {'a','b','c','d','e'};
    //     for(int i=0;str[i]!='\0';i++){
    //         cout<<str[i]<<" ";
    //     }

    return 0;
}