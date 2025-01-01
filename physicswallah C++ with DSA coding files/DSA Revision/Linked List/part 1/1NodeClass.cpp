#include <iostream>
using namespace std;
// creationg user defined datatype Node which has two data members
// first is val which contain the integer data
// second is next which contain address of next Node
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
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // cout<<b.val;
    cout << (a.next)->val << endl;
    // or
    cout << (*(a.next)).val << endl;
    // a.next me node b ka address h only
    //*(a.next) uss address me gya
    //  wha pe node hh jisme 2 data store hh ek val and dushra next jo address store kr rha h next node ka
    //  (*(a.next)).val ye val dega b ka

    cout << (*(a.next)).next << endl;
    // (*(a.next)).next address dega b ke next wale me jo store kr rkha h c ka address
    // or
    cout << &c<<endl;

    // printing c val
    cout<<((a.next)->next)->val<<endl;
    // (a.next) means node b
    // (a.next)->next means node b ka next mtlb node c
    // ((a.next)->next)->val means node c ka val
    cout<<(*(*(a.next)).next).val;
    
}