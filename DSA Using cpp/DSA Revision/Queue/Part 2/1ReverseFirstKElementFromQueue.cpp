#include <iostream>
#include <vector>
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
void reverseFirstKEle(queue<int>& q,int k){
    stack<int>s;
    int size = q.size();
    for(int i = 0;i<k;i++){
        int x = q.front();
        s.push(x);
        q.pop();
    }
    for(int i = 0;i<k;i++){
        int x = s.top();
        q.push(x);
        s.pop();
    }
    for(int i = 0;i<size-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
        
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
    
    reverseFirstKEle(q,3);
    display(q);
    
    
}