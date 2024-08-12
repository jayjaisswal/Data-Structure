#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i = 0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sorting(vector<int>& b){
    int n = b.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(b[i]==0) i++;
        if(b[j]==1) j--;
        if(i>j) break;
        if(b[i]==1 && b[j]==0){
            b[i] = 0; // basically we swap 
            b[j] = 1;
        }

    }
    
    // Also Correct
    // while(i<=j){
    //     if(b[i]==0) i++;
    //     else if(b[j]==1) j--;
    //     else if(b[i]==1 && b[j]==0){
    //         b[i] = 0; // basically we swap 
    //         b[j] = 1;
    //     }

    // }


}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    sorting(v);
    display(v);
}
