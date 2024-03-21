#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{ // efficient method
    string str = "physicswallah is  a     feeling    emotion";
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}