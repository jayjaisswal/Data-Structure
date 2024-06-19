#include <iostream>
using namespace std;
class Node
{ // Linked list Node
public:
    int val;
    Node *next;
    Node(int val)
    { // constructor
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtEnd(Node *head, int val)
{   //TC =O(n)
    Node *temp = new Node(val);
    while (head->next != NULL) head = head->next;
    head->next = temp;
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(40);
    Node *c = new Node(150);
    Node *d = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    insertAtEnd(a, 80);
    cout<<endl;
    display(a);

    return 0;
}