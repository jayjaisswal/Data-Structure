#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int n,m;
    cout<<"No of rows :";
    cin>>n;
    cout<<"No of Column :";
    cin>>m;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
}