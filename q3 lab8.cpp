
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node* root = createNode(35);

    root->left = createNode(18);
    root->right = createNode(55);

    root->left->left = createNode(10);
    root->left->right = createNode(25);

    root->right->left = createNode(45);
    root->right->right = createNode(65);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}

