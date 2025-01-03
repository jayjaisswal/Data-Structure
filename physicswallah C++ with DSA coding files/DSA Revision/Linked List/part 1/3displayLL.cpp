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

// Display function
void display(Node *head) //agr pass bt reference h to "a" ko change hona chahiye but nhi  ye pass by reference nhi h address h
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
        
    }
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

   
    
    display(a);
  


    
}