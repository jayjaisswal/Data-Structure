#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// recursive display function
void recursiveDisp(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    recursiveDisp(head->next);
    
    }
void insertAtEnd(Node* head,int value){
    Node* temp = new Node(value);
    Node* t = head;
    while(t->next!=NULL){ // ishka mtlb last node me jaana hai very important
        t = t->next;
    }
    t->next = temp;


}
int main()
{
    Node *a = new Node(10); // a , b ,c d are are address of Node a, b, c, d
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b; // a address h "->" ye lgane se uss address pe gya mai and then wha ek node h uss node ke next me b ka address store kr dnge
    b->next = c;
    c->next = d;

   
    recursiveDisp(a);
    insertAtEnd(a,8);
    cout<<endl;
    recursiveDisp(a);
    
}