#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    // Ek baara agr size mil gya then u can treat it like array
    cout<<"v[0]:"<<v[0]<<endl;
    cout<<"v[1]:"<<v[1]<<endl;
    cout<<"v[2]:"<<v[2]<<endl;
    v[0] = 6;
    cout<<"v[0]:"<<v[0]<<endl;

    vector<int> p(5, 7); // initial size = 5, each element has value 7
    
}
