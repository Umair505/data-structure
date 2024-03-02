//https://www.codingninjas.com/studio/problems/code-find-a-node_5682?leftPanelTabValue=PROBLEM
/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// bool isNodePresent(BinaryTreeNode<int> *root, int x) {
//     // Write your code here
//     if(root == NULL) return false;
//     if(root->data == x) return true;
//     bool l = isNodePresent(root->left,x);
//     bool r = isNodePresent(root->right,x);
//     return (l || r);
// }
#include <iostream>

// Binary Tree node structure
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to check if a node with value x is present in the binary tree
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
}

int main()
{
    // Example usage
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);

    int valueToFind =3;
    if (isNodePresent(root, valueToFind))
    {
        std::cout << "Node with value " << valueToFind << " is present in the binary tree.\n";
    }
    else
    {
        std::cout << "Node with value " << valueToFind << " is not present in the binary tree.\n";
    }

    // Clean up memory
    // Add appropriate deallocation code for Binary Tree nodes

    return 0;
}
