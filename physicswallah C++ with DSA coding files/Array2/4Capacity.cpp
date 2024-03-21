#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    v.push_back(11);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    v.push_back(11);
    v.push_back(10);
    v.push_back(0);
    v.push_back(11);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    cout<<"Size is :"<<v.size()<<endl;
    cout<<"Capicity is :"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is :"<<v.size()<<endl;
    cout<<"Capicity is :"<<v.capacity()<<endl;
    //size changes but capacity NOT
    

return 0;
}