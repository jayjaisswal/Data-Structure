#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4); 
    v.push_back(3); 
    v.push_back(4); 
    v.push_back(1); 
    v.push_back(6); 
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    cout<<"Enter the Element you want to search for its last occurance :"<<endl;
    int x;
    cin>>x;
    int idx = -1;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if(v[i]==x) idx = i;
    // }
    // cout << idx;

    // better to use backward loop 
    // as we want last occurance
    for (int i = v.size()-1; i >=0; i--)
    {
        if(v[i]==x) 
        {
            idx = i;
            break;

        }
        
    }
    cout << idx;


   
}
