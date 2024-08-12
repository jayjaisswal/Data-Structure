#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //you need not mention size
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";    // 7 4 1 9 
    }
    cout<<endl;
   
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";    // 7 4 1
    }

    cout<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
   

    
}
// pop_back krne pe size kmega.... but capacity remains same


