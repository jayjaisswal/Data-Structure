#include<iostream>
#include<vector>
using namespace std;
//vector are passed by value ,Each time you pass
//new vector is created just like normal function
void change(vector<int> a) //-->for pass by reference we use '&a'.
{
    a[0]=100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout<<endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout<<endl;



return 0;
}