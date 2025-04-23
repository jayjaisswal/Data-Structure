#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
        
    }

};
class Deque{
public:
    Node* head;
    Node* tail;
    int size;
    Deque()
    {
        head = NULL;
        tail= NULL;
        size = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }else{
            head->prev = temp;
            temp->next = head; //
            head = temp;

        }
        size++;
    }
    void popFront(){
        if (size == 0) 
        {
            cout<<"Empty!!";
            return;
        }
        Node* toDelete = head;
        head = head->next;
        if(head) head->prev = NULL;
        if(head == NULL) tail = NULL;
        size--;
        delete toDelete;
    }
    void popBack(){
        if (size == 0) 
        {
            cout<<"Empty!!";
            return;
        }
        Node* toDelete = tail;
        tail = tail->prev;
        if(tail) tail->next = NULL;
        if(tail == NULL) head = NULL;
        size--;
        delete toDelete;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    int back()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return tail->val;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

};

int main() {
    Deque dq;

    dq.pushFront(1);
    dq.pushFront(2);
    dq.pushFront(3);
    dq.pushFront(4);
    dq.display();
    cout<<endl;
    dq.pushBack(5);
    dq.pushBack(6);
    dq.display();
    cout<<endl;
    
    cout <<"Front"<< dq.front() << endl;
    cout <<"Back: "<< dq.back() << endl;
    
    dq.popFront();
    dq.popFront();
    dq.display();
    cout<<endl;
    dq.popBack();
    dq.popBack();
    dq.display();
    cout<<endl;
    dq.pushFront(99);
    dq.pushBack(90);
    dq.display();
    cout<<endl;
    cout <<"Front"<< dq.front() << endl;
    cout <<"Back: "<< dq.back() << endl;


    
    
    
    
}