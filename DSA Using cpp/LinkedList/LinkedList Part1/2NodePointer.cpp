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
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(40);
    Node* c = new Node(150);
    Node* d = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    // cout<<endl;
    // cout<<a->next->next->next->val;
  

return 0;
}
