#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v; // you need not mention size
    // inserting / input ke liye do not use []
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;

    return 0;
}