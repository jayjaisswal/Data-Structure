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
        if(b[i]<0) i++;
        if(b[j]>0) j--;
        if(i>j) break;
        if(b[i]>0 && b[j]<0){
            int temp = b[i];
            b[i] = b[j];
            b[j] = temp;
        }

    }
    
    


}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-100);
    v.push_back(7);
    v.push_back(-8);
    v.push_back(-91);
    v.push_back(11);
    v.push_back(20);
    display(v);
    sorting(v);
    display(v);
}
