#include <iostream>
#include <climits>
using namespace std;

// Tree Node
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// pre-order traversal
void PreOrder(Node *root)
{
    if (root == NULL)
        return;               // base case
    cout << root->val << " "; // root
    PreOrder(root->left);     // left
    PreOrder(root->right);    // right
}

// In-order traversal
void InOrder(Node *root)
{
    if (root == NULL)
        return;               // base case
    InOrder(root->left);      // left
    cout << root->val << " "; // root
    InOrder(root->right);     // right
}
// Post-order traversal
void PostOrder(Node *root)
{
    if (root == NULL)
        return;          // base case
    PostOrder(root->left);       // left
    PostOrder(root->right);     // right
    cout << root->val << " "; // root
}

int main() 
{

    Node *a = new Node(1); // root node
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout << "PreOrder Display: ";
    PreOrder(a);
    cout << endl;
    cout << "InOrder Display: ";
    InOrder(a);
    cout << endl;
    cout << "Post Display: ";
    PostOrder(a);
}