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

void display(Node *head)
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

    Node *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << a->next->next->next->val; // node d val

    // pichhle vaari hm dot ka bhi use kr rhe the print krane ke liye
    // because nichhe code me "a" ka mtlb node tha and iss code me "a" ka mtlb node a ka address h

    // function call to print LL
    cout << endl;
    display(a);
}