// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;

// };
// int main()
// {
//     Node a;
//     a.val = 10;
//     Node b;
//     a.val = 80;
//     Node c;
//     a.val = 30;
//     Node d;
//     a.val = 50;
//     //forming linkedlist
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;

// return 0;
// }

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
    cout<<&a<<endl;
    cout<<a.next<<endl;
    // a.next = NULL;
    // b.next = NULL;
    // c.next = NULL;
    // d.next = NULL;
    //forming linkedlist
    a.next = &b;
    b.next = &c;
    c.next = &d;

    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;

    //we can also upate the value
    a.next->val = 99;
    cout<<(a.next)->val<<endl;
    cout<<(b.next)->val<<endl;
    cout<<(c.next)->val<<endl;

    // a kii help se direct d kii value bhi nikala jaa skta hai
    cout<<(((a.next)->next)->next)->val;
    // OR
    // cout<<(*(*(*(a.next)).next).next).val;

return 0;
}


