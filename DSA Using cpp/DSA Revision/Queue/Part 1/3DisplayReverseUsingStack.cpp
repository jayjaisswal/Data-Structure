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

void displayReverse(queue<int>& q){
    stack<int> s;
    // empty the queue into the stack
    while(!q.empty()){
        int x = q.front();
        s.push(x);
        q.pop();
        
    }
    // empty the stack into queue
    while(s.size()!=0 ){
        int x = s.top();
        q.push(x);
        s.pop();
        
    }
}

int main() {
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
   
    display(q);   
    displayReverse(q);
    display(q);   
    displayReverse(q);
    display(q); 
    
    
    
}