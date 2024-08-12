#include<iostream>
using namespace std;
class Node{ //DLL Node or user defined datatype
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    DLL(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;  //extra
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; //extra
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i =1; i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; //extra
            t->next->prev = t; //extra
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        head = head->next;
        if(head!=NULL) //or if(head) -->both are the same things
            head->prev = NULL; //extra
        if(head==NULL) tail=NULL; //extra
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(size==1){//extra
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; //extra
            size--;
        }
    }

    // int getAtIdx(int idx){
    //     if(idx<0 || idx>=size){
    //         cout<<"Invalid Index";
    //         return -1;
    //     }
    //     else if(idx==0) return head->val;
    //     else if(idx==size-1) return tail->val;
    //     else{
    //         Node* temp = head;
    //         for(int i =1;i<=idx;i++){
    //             temp = temp->next;
    //         }
    //         return temp->val;
    //     }
    // }

    // Optimized get method

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
            Node* temp = head;
            for(int i =1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
            }
            else{  // idx>size/2
                Node* temp = tail;
                for(int i =1;i<size-idx;i++){
                temp = temp->prev;
            }
            return temp->val;
            }
        }
    }




    void display(){
        Node* temp = head;
        while(temp!=NULL){ //or head!=NULL
         cout<<temp->val<<" ";
         temp = temp->next;
      }
      cout<<endl;
}


};
int main()
{
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(100);
    list.display();
    list.insertAtIdx(0, 101);
    list.insertAtIdx(5, 44);
    list.insertAtIdx(3, 88);
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIdx(0);
    list.deleteAtIdx(0);
    list.deleteAtIdx(2);
    list.display();
    // cout<<list.getAtIdx(0);
    list.insertAtTail(90);
    list.insertAtTail(49);
    list.display();
    cout<<list.getAtIdx(0)<<endl;
    cout<<list.getAtIdx(4);

    
    


//1:07:18 time


return 0;
}