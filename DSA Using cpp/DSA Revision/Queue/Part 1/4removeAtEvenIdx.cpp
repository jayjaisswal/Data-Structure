#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

using namespace std;

void display(queue<int>& q){
    for(int i =0;i<q.size();i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void removeAtEven(queue<int>& q){
    
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else {
            int x = q.front();
            q.pop();
            q.push(x);
        }

    }
}

int main() {
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
   
    display(q);   
    removeAtEven(q);
    display(q);   
   
    
    
    
}