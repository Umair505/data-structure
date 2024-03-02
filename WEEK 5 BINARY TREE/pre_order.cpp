//https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void pre_order(TreeNode<int>* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

vector<int> preOrder(TreeNode<int>* root) {
    vector<int> result;
    pre_order(root);
    return result;
}
