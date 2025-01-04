#include <iostream>
using namespace std;
// class Node
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

// class LinkedList
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    // display method
    void display()
    {
        if (size == 0)
            cout << 0;

        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
        }
        cout << endl;
    }

    // insert At Tail method
    void insertAtTail(int value)
    {
        Node *temp = new Node(value); // step 1 create a dyamic node with value inserted in it
        if (size == 0)
        {

            head = tail = temp;
        }
        else
        {

            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // insert At Head method
    void insertAtHead(int value)
    {
        Node *temp = new Node(value);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int value)
    {

        if (idx == 0)
        {
            insertAtHead(value);
        }
        else if (idx < 0 || idx > size)//not size-1 as we are inserting in last too via insertAtTail
        {
            cout << "invalid index";
            cout << endl;
        }

        else if (idx == size)
        {
            insertAtTail(value);
        }

        else
        {
            Node *t = new Node(value);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
    }

    void getElementAtIdx(int idx)
    {
        if (idx < 0 || idx >= size) {
            cout<<"Invalid Index";
            return;
        }

        Node* temp = head;
        for(int i = 0;i<idx;i++){
            temp = temp->next;
        }
        cout<<temp->val;

    }
};
int main()
{
    LinkedList ll;

    ll.insertAtTail(5);
    ll.insertAtTail(9);
    ll.insertAtTail(10);
    // ll.display();
    ll.insertAtHead(8);
    ll.display();
    // cout << ll.size;
    ll.insertAtIndex(4, 66);
    ll.display();
    ll.getElementAtIdx(0);
}