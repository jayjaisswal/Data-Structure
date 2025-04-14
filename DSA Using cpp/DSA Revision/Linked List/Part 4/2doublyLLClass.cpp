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

class DLL // user defined data structure
{
public:
    Node *head;
    Node *tail;
    int size;

    // constructor
    DLL()
    {
        head = tail = NULL;
        size = 0;
    }

    // insert at the end

    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    // insert at head
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // insert at index
    void insertAtIndex(int val, int index)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }
        else if (index == 0)
            insertAtHead(val);
        else if (index == size)
            insertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i <= index - 2; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t; // what does this means  temp->next->prev = t;
            size++;
        }
    }

    // delete at head
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "List is empty" << endl;
            return;
        }
        else
        {
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            if (head == NULL)
                tail = NULL;
            size--;
        }
    }

    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "List is empty" << endl;
            return;
        }
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }
        else
        {
            Node *temp = tail->prev;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    // delete at tail
    // void deleteAtTail()
    // {
    //     if (size == 0)
    //     {
    //         cout << "List is empty" << endl;
    //         return;
    //     }
    //     else{
    //         tail = tail->prev;
    //         if(tail!=NULL) tail->next = NULL;
    //         if(tail==NULL) head = NULL;
    //         size--;

    //     }
    // }

    // delete at index
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Index out of bounds" << endl;
            return;
        }
        else if (size == 0)
        {
            cout << "List is empty" << endl;
            return;
        }
        else if (index == 0)
        {
            deleteAtHead();
            return;
        }
        else if (index == size - 1)
        {
            deleteAtTail();
            return;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i <= index - 2; i++)
            {
                temp = temp->next;
            }

            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }

    // getAtIndex
    // int getAtIndex(int index)
    // {
    //     if (index < 0 || index >= size)
    //     {
    //         cout << "Invalid Index";
    //         return -1;
    //     }
    //     else if (size == 0)
    //     {
    //         cout << "List is empty";
    //         return -1;
    //     }
    //     else if (index == 0)
    //         return head->val;
    //     else if (index == size - 1)
    //         return tail->val;
    //     else
    //     {
    //         Node *temp = head;
    //         for (int i = 0; i <= index - 1; i++)
    //         {
    //             temp = temp->next;
    //         }
    //         return temp->val;
    //     }
    // }

    // optimized version of getAtIndex
    int getAtIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid Index";
            return -1;
        }
        else if (index == 0)
            return head->val;
        else if (index == size - 1)
            return tail->val;
        else
        {
            if (index < size / 2)
            {
                Node *temp = head;
                for (int i = 0; i <= index - 1; i++)
                {
                    temp = temp->next;
                }
                return temp->val;
            }
            else
            {
                Node *temp = tail;
                for (int i = size - 1; i > index; i--)
                {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(33);
    list.display();
    list.insertAtIndex(2, 2);

    list.display();
    list.deleteAtHead();
    list.insertAtTail(6);
    list.display();
    list.deleteAtHead();
    list.display();
    list.display();
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(33);
    list.display();
    // list.deleteAtTail();
    // list.display();
    // list.deleteAtIndex(2);
    list.display();
    cout << list.getAtIndex(3);
    cout<<list.getAtIndex(2);
    
}

// TODO: Code optimized function for all like getATIndex