#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack{
    public:
    vector <int> v; // no size limit
    
    Stack(){
    }

    // push
    void push(int val){
        v.push_back(val); // no overflow condition
    }

    // pop
    void pop(){
        if(v.size()==0){
            cout << "Stack Underflow" << endl;
            return;
        }
        v.pop_back();
    }

    // top
    int top(){
        if(v.size()==0){
            cout << "Stack Underflow" << endl;
            return 1;
        }
        return v[v.size()-1] ;
    }

    int size(){
        return v.size();
    }
};

int main() {
    Stack sc;
    sc.pop();
    sc.push(1);
    sc.push(2);
    sc.push(3);
    sc.push(3);
    sc.push(3);
    sc.push(3);
    cout << sc.top() << endl; // Output: 3
    sc.pop();
    cout << sc.top() << endl; // Output: 2
    cout<<sc.size();
    return 0;
   
}