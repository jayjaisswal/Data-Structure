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

int levels(Node *root)
{
    if (root == NULL) return 0; // base case
    int left = levels(root->left);   // left subtree
    int right = levels(root->right); // right subtree
    return max(left, right) + 1;     // return max depth
}

void NthLevel(Node *root, int curr, int level)
{
    if (root == NULL) return; // base case   
    if (curr == level)  {
        cout << root->val << " "; 
        return;
    }
    NthLevel(root->left, curr + 1, level);  // traverse left subtree
    NthLevel(root->right, curr + 1, level); // traverse right subtree
}
void NthLevelReverse(Node *root, int curr, int level)
{
    if (root == NULL) return; // base case   
    if (curr == level)  {
        cout << root->val << " "; 
        return;
    }
    
    NthLevelReverse(root->right, curr + 1, level); // traverse right subtree
    NthLevelReverse(root->left, curr + 1, level);  // traverse left subtree
}


void NthOrder(Node *root)
{
   int n = levels(root);
   for(int i = 1;i<=n;i++){
    NthLevel(root, 1, i);
    cout << endl;
   }
}

void NthOrderRev(Node *root)
{
   int n = levels(root);
   for(int i = 1;i<=n;i++){
    NthLevelReverse(root, 1, i);
    cout << endl;
   }
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

    cout << "NthLevel Display: ";
    NthLevel(a, 1, 3);
    cout << endl;
    cout << "NthOrder Display: " << endl;
    NthOrder(a);
    cout << "NthOrder Reverse Display: " << endl;
    NthOrderRev(a);
}