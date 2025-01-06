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
            cout << "Empty LL";

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

    // insert at any index
    void insertAtIndex(int idx, int value)
    {

        if (idx == 0)
        {
            insertAtHead(value);
        }
        else if (idx < 0 || idx > size) // not size-1 as we are inserting in last too via insertAtTail
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

    // get elemenyt at any index
    void getElementAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index" << endl;
            return;
        }

        Node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }

    // delete at head
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "Linkedlist is empty!!" << endl;
        }
        else
        { // also works if size is 1 or we can implement "head=tail=null & size--"
            head = head->next;
            size--;
        }
    }

    // delete at tail
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Linkedlist is empty!!" << endl;
            return;
        }

        Node *temp = head;
        if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    // delete at index
    void deleteAtIndex(int idx)
    {
        if (idx < 0 || idx >= size) // Check for invalid indices
        {
            cout << "Invalid Index" << endl;
            return;
        }
        if (idx == 0)
        {
            deleteAtHead();
        }
        
        else if (idx == size - 1)
        {
            deleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
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
    // ll.display();
    // cout << ll.size;
    ll.insertAtIndex(4, 66);
    // ll.display();
    // ll.getElementAtIdx(4);

    // ll.deleteAtHead();
    ll.display();
    // ll.deleteAtTail();
    ll.deleteAtIndex(3);
    ll.display();
}