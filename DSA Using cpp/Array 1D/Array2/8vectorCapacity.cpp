#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v; // you need not mention size
    // inserting / input ke liye do not use []
    v.push_back(6);
    cout<<"capacity :"<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity :"<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"capacity :"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"capacity :"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"capacity :"<<v.capacity()<<endl;

    return 0;
}