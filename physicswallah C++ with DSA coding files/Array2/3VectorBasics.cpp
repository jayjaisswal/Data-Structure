#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v; // you need not mention size
    // inserting / input ke liye do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);

    // if u want to update and access use []
    v[0] = 88;
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";

    return 0;
}