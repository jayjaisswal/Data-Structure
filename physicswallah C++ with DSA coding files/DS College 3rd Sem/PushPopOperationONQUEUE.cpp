#include <iostream>
using namespace std;
class Node
{
public:
  int key;
  int data;
  Node *next;
  Node()
  {
    key = 0;
    data = 0;
    next = NULL;
  }
  Node(int k, int d)
  {
    key = k;
    data = d;
  }
};
class queue
{
public:
  Node *front;
  Node *rear;
  queue()
  {
    front = NULL;
    rear = NULL;
  }
  bool IsEmpty()
  {
    if (front == NULL && rear == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  Node *NodeExist(Node *n)
  {
    Node *temp = rear;
    while (temp != NULL)
    {
      if (n->key == temp->key)
      {
        return temp;
      }
      temp = temp->next;
    }
    return temp;
  }
  void enqueue(Node *n)
  {
    if (IsEmpty())
    {
      rear = n;
      front = n;
      cout << "Node enqueueed successfully:" << endl;
    }
    else if (NodeExist(n))
    {
      cout << "Node already exist with this key."
           << "enqueue with different key:" << endl;
    }
    else
    {
      Node *temp = rear;
      temp->next = n;
      rear = n;
      cout << "Node  ENQUEUED successfully" << endl;
    }
  }
  Node *dequeue()
  {
    Node *temp = NULL;
    if (IsEmpty())
    {
      cout << "queue is underflow:" << endl;
      return temp;
    }
    else if (front == rear)
    {
      temp = front;
      front = NULL;
      rear = NULL;
      return temp;
    }
    else
    {
      temp = front;
      front = front->next;
      return temp;
    }
  }
  void display()
  {
    if (IsEmpty())
    {
      cout << "queue is empty:" << endl;
    }
    else
    {
      cout << "The elements in the queue is :" << endl;
      Node *temp = front;
      while (temp != NULL)
      {
        cout << "(" << temp->key << "," << temp->data << ")-->";
        temp = temp->next;
      }
    }
  }
};
int main()
{
  queue q;
  int option, key, data;
  do
  {
    cout << "What operation do you want to perform?"
         << "Select Option number. Enter 0 to exit." << endl;
    cout << "Press 1. Enqueue()" << endl;
    cout << "Press 2. Dequeue()" << endl;
    cout << "Press 3. display()" << endl;
    cout << "Press 4. Exit" << endl;
    cin >> option;
    Node *new_node = new Node();
    switch (option)
    {
    case 1:
      cout << "Enter KEY and VALUE of NODE to ENQUEUE "
           << "in the Queue"
           << endl;
      cin >> key;
      cin >> data;
      new_node->key = key;
      new_node->data = data;
      q.enqueue(new_node);
      break;
    case 2:
      new_node = q.dequeue();
      cout << "Dequeued Value is: (" << new_node->key << "," << new_node->data << ")";
      delete new_node;
      cout << endl;
      break;
    case 3:
      q.display();
      cout << endl;
      break;
    default:
      cout << "Invalid input:" << endl;
    }
  } while (option !=4);
  return 0;

}
