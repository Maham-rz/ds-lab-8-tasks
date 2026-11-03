
#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node*left;
    Node*right;
};


Node*createNode(char value)
{
    Node*newNode=new Node;

    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}


void preorder(Node*root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left, Root, Right
void inorder(Node*root)
{
    if(root==NULL)
        return;

    if(root->left!=NULL||root->right!=NULL)
        cout<<"(";

    inorder(root->left);

    cout<<root->data;

    inorder(root->right);

    if(root->left!=NULL||root->right!=NULL)
        cout<<")";
}


void postorder(Node*root)
{
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    // Construct expression tree
    Node*root=createNode('*');

    root->left=createNode('+');
    root->right=createNode('-');

    root->left->left=createNode('A');
    root->left->right=createNode('B');

    root->right->left=createNode('C');
    root->right->right=createNode('D');

    cout<<"Preorder: ";
    preorder(root);

    cout<<"\nInorder: ";
    inorder(root);

    cout<<"\nPostorder: ";
    postorder(root);

    return 0;
}

