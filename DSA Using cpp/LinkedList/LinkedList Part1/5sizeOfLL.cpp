#include<iostream>
using namespace std;
class Node{  //Linked list Node
public:
    int val;
    Node* next;
    Node(int val){  //constructor
        this->val = val;
        this->next = NULL;
    }

};
void display(Node* head){
    while(head!= NULL){
    cout<<head->val<<" ";
    head = head->next;
    }
}

void size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    cout<<endl;
    cout<<"size = "<<n;
}
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(40);
    Node* c = new Node(150);
    Node* d = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    size(a);

    // cout<<endl;
    // cout<<a->next->next->next->val;
  

return 0;
}