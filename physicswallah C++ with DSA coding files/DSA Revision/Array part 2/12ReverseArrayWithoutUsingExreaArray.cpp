#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i =0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);
    v.push_back(8);

    display(v);

   
    // reverse
    // int i = 0;
    // int j = v.size()-1;
    // while(i<=j){
    //     // swap v[i] and v[j]
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;

    // }

    // using for loop
    for(int i=0,j=v.size()-1;i<=j;i++, j--){
       int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    } 
       


    
     display(v);
   
}
