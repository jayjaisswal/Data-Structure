#include<iostream>
#include<climits>
using namespace std;

// Tree Node
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

// Display the binary tree in pre-order traversal
void display(Node *root){
    if(root == NULL) return;

    cout << root->val << " ";
    display(root->left);
    display(root->right);
}


// sum of all nodes in a binary tree
int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);

}

// size of a binary tree
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);


}

//  max val of a binary tree
int maxi(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->val, max(maxi(root->right),maxi(root->left)));


}

// levels
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 +  max(levels(root->right),levels(root->left));


}

int main(){

    Node *a = new Node(1); //root node
    Node *b = new Node(2);  
    Node *c = new Node(3);
    Node *d = new Node(43);
    Node *e = new Node(5);
    Node *f = new Node(6);  
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);

    cout << endl;
    cout << "Sum of all nodes: " << sum(a) << endl;
    cout << "Size of the tree: " << size(a) << endl;
    cout << "Max value in the tree: " << maxi(a) << endl;
    cout << "Levels in the tree: " << levels(a) << endl;

}