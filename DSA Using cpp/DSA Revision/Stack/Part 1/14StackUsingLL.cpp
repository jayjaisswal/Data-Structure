#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    // push
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head= temp;
        size++;


    }

    // pop
    void pop(){ 
        if(size==0){ // or head==NULL
            cout<<"Stack is empty"<<endl;
        }
        else{
            head = head->next;
            size--;
        }
    }

    // top
    int top(){
        if(size==0){ // or head==NULL
            cout << "Stack Underflow" << endl;
            return -1;
            }
        return head->val;
    }


    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
            }

    }

    // reverse print using recursion
    void print( Node* temp){
        if(temp==NULL) return;
        cout<<temp->val<<" ";
        print(temp->next);
    }

    void recurReverseDisplay(){
        Node* temp = head;
        print(temp);
        

    }


    // normal print using recursion

    void printNormalres( Node* temp){
        if(temp==NULL) return;
        
        printNormalres(temp->next);
        cout<<temp->val<<" ";
       
    }

    void normalDisplay(){
        Node* temp = head;
        printNormalres(temp);
    }
};

int main() {
    Stack sc;
    sc.push(1);
    sc.push(2);
    sc.push(3);
    sc.recurReverseDisplay();\
    cout<<  endl; 
    sc.pop();
    sc.pop();
    sc.recurReverseDisplay();
    cout<<  endl; 
    sc.push(4);
    sc.push(5);
    sc.push(7);
    sc.push(8);
    sc.push(9);
    sc.push(76);
    sc.recurReverseDisplay();
    cout<<  endl; 
    cout << sc.top() << endl;  
    sc.display();
    cout<<  endl;
    sc.normalDisplay();
    return 0;
   
}