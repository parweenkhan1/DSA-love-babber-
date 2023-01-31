#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
int maxDepth(node *Node)
{
    if (Node == NULL)
    {
        return 0;
    }
    else
    {
        int lnode = maxDepth(Node->left);
        int rnode = maxDepth(Node->right);

        return max(lnode, rnode) + 1;
    }
}
node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return Node;
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "The Height of the Binary Tree is:" << maxDepth(root) << endl;
}