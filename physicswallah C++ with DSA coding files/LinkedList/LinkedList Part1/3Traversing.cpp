#include<iostream>
using namespace std;
class Node{  //Linked list Node
public:
    int val;
    Node* next;
    Node(int val){  //constructor
        this->val = val;
        this->next = NULL;
    }

};
int main()
{
    Node a(10);
    Node b(80);
    Node c(30);
    Node d(50);
    //forming linkedlist
    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node temp = a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

return 0;
}
