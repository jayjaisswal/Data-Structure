#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    // push
    // pop
    // front -> top
    // size, empty
    // back
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    
    
}