#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// normal display function
void display(Node *head) // space complexity O(1)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// normal display reverse
void displayReverse(Node *tail) // space complexity O(1)
{
    while(tail){
        cout << tail->val << " ";
        tail = tail->prev;
    }
}

// recursive display function
void displayRecursive(Node *head) // space complexity O(n)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayRecursive(head->next);
}

// reverse display using recursive
void displayReverseRecursive(Node *head) // space complexity O(n)
{
    if (head == NULL)
        return;
    displayReverseRecursive(head->next);
    cout << head->val << " ";
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayRecursive(a);
    cout << endl;
    displayReverseRecursive(a);
    cout<<endl;
    displayReverse(e);
}