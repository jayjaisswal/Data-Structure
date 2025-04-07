#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    Node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
    bool IsEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insert(Node *n)
    {
        if (root == NULL)
        {
            root = n;
            cout << "Value Inserted as root node";
        }
        else
        {
            Node *temp = root;
            while (temp != NULL)
            {
                if (n->value == temp->value)
                {
                    cout << "Value Already exist,"
                         << "Insert another value!" << endl;
                    return;
                }
                else if ((n->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = n;
                    cout << "Value Inserted to the left!" << endl;
                    break;
                }
                else if (n->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((n->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = n;
                    cout << "Value Inserted to the right!" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
    void preorderprint(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        cout << r->value << " ";
        preorderprint(r->left);
        preorderprint(r->right);
    }
    void InorderPrint(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        InorderPrint(r->left);
        cout << r->value << " ";
        InorderPrint(r->right);
    }
    void PostorderPrint(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        PostorderPrint(r->left);
        PostorderPrint(r->right);
        cout << r->value << " ";
    }
    
};
int main()
{
    BST obj;
    int option, val;
    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1.Insert Node" << endl;
        cout << "2.PRE-ORDER"<< endl;
        cout << "3.In-order" << endl;
        cout << "4.POST-ORDER" << endl;
        cin >> option;
        Node *n = new Node();
        switch (option)
        {
        case 1:
            cout << "INSERT" << endl;
            cout << "Enter VALUE of TREE NODE to INSERT in BST: ";
            cin >> val;
            n->value = val;
            obj.insert(n);
            cout << endl;
            break;
        case 2:
            cout << "PRE-ORDER: " << endl;
            obj.preorderprint(obj.root);
            cout << endl;
            cout << endl;
        case 3: cout << "IN-ORDER: " << endl;   
            obj.InorderPrint(obj.root);
            cout << endl;
            cout << endl;
             break;
        case 4: cout << "POST-ORDER: " << endl;
            obj.PostorderPrint(obj.root);
            cout << endl;
            cout << endl;
            break;
        default:
            cout << "Invalid Input:" << endl;
        }
    } while (option != 4);
    return 0;
}
