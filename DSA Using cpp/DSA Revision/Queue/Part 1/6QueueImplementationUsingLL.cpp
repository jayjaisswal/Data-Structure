#include <iostream>
#include <vector>
#include <string>
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

class Queue
{
public:
    Node *head;
    Node *tail;
    int size;
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void push(int val)
    {
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

    void pop()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        size--;
        delete (temp); // no memory wastage
    }
    int front()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    int back()
    {
        if (size == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return tail->val;
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
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << "front " << endl;
    cout << q.front() << endl;
    cout << "back " << endl;
    cout << q.back() << endl;

    cout << "size " << endl;
    cout << q.size << endl;

    cout << "display " << endl;
    q.display();
    cout << endl;
    cout << "pop " << endl;
    q.pop();
    q.pop();
    cout << "display " << endl;
    q.display();
}