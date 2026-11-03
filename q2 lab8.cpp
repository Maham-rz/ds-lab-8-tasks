
#include <iostream>
using namespace std;

class Node
{
	public:
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

void preorder(Node* root)
{
    if(root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = createNode(15);

    root->left = createNode(8);
    root->right = createNode(25);

    root->left->left = createNode(4);
    root->left->right = createNode(12);

    root->right->right = createNode(30);

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}

