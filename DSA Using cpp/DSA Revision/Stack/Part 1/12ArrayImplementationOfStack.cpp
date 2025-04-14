#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }

    // push
    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    // pop
    void pop(){
        if(idx<=0){
            cout << "Stack Underflow" << endl;
            return;
        }
        idx--;
    }

    // top
    int top(){
        if(idx<=0){
            cout << "Stack Underflow" << endl;
            return -1;
            }
        return arr[idx] ;
    }

    int size(){
        return idx + 1;
    }

    void display(){
        for(int i = 0; i <= idx; i++){
            cout << arr[i] << " ";
            }
            cout << endl;

    }
};

int main() {
    Stack sc;
    sc.push(1);
    sc.push(2);
    sc.push(3);
    sc.pop();
    sc.pop();
    sc.push(4);
    sc.push(5);
    sc.push(7);
    sc.push(8);
    sc.push(9);
    sc.push(76);
    // cout << sc.top() << endl; 
    // cout << sc.top() << endl; 
    // cout<<sc.size();
    sc.display();
    return 0;
   
}