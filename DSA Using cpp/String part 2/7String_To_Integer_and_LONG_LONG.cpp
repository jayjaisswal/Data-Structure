#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{

    //string to integer
    string str="123456";
    int x = stoi(str);
    cout<<x+1<<endl;


    //string to integer
    string s="12345678798798";
    long long y = stoll(s);
    cout<<y+1<<endl;


    //Integer to string
    int a = 1234567;
    string ss= to_string(a);
    cout<<ss<<endl;


    

    return 0;
}