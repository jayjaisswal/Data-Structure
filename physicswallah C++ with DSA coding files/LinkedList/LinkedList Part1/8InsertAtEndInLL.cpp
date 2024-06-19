// Here we have access of head and tail both 

#include<iostream>
using namespace std;
class Node{  //Linked list Node (User defined data type)
public:
    int val;
    Node* next;
    Node(int val){  //constructor
        this->val = val;
        this->next = NULL;
    }

};
class LinkedList{  //User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){   //TC = O(1)
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
};


int main()
{
    LinkedList ll; //{ }
    ll.insertAtEnd(10); //{ 10->NULL }
    ll.insertAtEnd(30); //{ 10->30->NULL }
    ll.display();
    ll.insertAtEnd(40); 
    ll.insertAtEnd(50); 
    ll.display();
    cout<<ll.size;
    
return 0;
}