#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // If size is given
    // vector<int> v(5);
    // for(int i = 0; i<v.size();i++){
    //     cin>>v[i];

    // }
    
    // for(int i = 0; i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    // if size is not given

    vector<int> v;
    cout<<"Enter the size"<<endl;
    int size;
    cin>>size;
    for(int i = 0; i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    
    for(int i = 0; i<size;i++){
        cout<<v[i]<<" ";
}
}
