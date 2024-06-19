// Here we have access of head and tail both

#include <iostream>
using namespace std;
class Node
{ // Linked list Node (User defined data type)
public:
    int val;
    Node *next;
    Node(int val)
    { // constructor
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val)
    { // TC = O(1)
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    { // TC = O(1)
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtTail()
    {
        if (size == 0)
            cout << "List is empty";
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
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
        cout << endl;
    }
};

int main()
{
    LinkedList ll;       //{ }
    ll.insertAtTail(10); //{ 10->NULL }
    ll.insertAtTail(30); //{ 10->30->NULL }
    ll.display();
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();
    cout << ll.size;
    cout << endl;
    ll.insertAtHead(88);
    ll.display();
    ll.insertAtIdx(5, 55);
    ll.display();
    // cout<<ll.getAtIdx(1);
    ll.deleteAtTail();
    ll.display();

    return 0;
}