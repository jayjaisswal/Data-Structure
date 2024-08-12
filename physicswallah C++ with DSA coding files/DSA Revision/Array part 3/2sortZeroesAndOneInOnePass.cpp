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
    int noz = 0;
    int noo = 0;
    int n = b.size();       
    for(int i = 0;i<=n-1;i++){
        if(b[i]==0) noz++;
        else noo++;
    }
     for(int i = 0;i<=n-1;i++){   
        if(i<noz) b[i]= 0;
        else b[i] = 1;
        
    }


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
