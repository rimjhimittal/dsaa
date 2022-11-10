#include <iostream>
using namespace std;
//  Pre-order -> NLR
//  In-order -> LNR
//  Post-order -> LRN

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);

        cin >> data;
    }
}

void inorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node *searchinBST(Node *&root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchinBST(root->left, key);
    }
    else
    {
        return searchinBST(root->right, key);
    }
}
Node *inorderSucc(Node *&root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
}
Node *deleteInBST(Node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = inorderSucc(root->right);
            root->data = temp->data;
            root->right = deleteInBST(root->right, temp->data);
        }
        return root;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter data";
    int n;
    takeInput(root);
    cout << "Inorder:";
    inorder(root);
    cout << endl
         << "Preorder:";
    preorder(root);
    cout << endl
         << "Postorder:";
    postorder(root);
    cout << endl;
    if (searchinBST(root, 10) == NULL)
    {
        cout << "Key doesnt exist";
    }
    else
    {
        cout << "Key exists";
    }

    root = deleteInBST(root, 2);
    inorder(root);
    return 0;
}
