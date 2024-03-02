#include <bits/stdc++.h>
using namespace std;
list<int> st;
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
void Leaf_Node(Node *root)
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL)
    {
        st.push_back(root->val);
    }
    Leaf_Node(root->left);
    Leaf_Node(root->right);
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l == -1)
            p->left = NULL;
        else
            p->left = new Node(l);
        if (r == -1)
           p->right = NULL;
        else
           p->right = new Node(r);

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    Node *root = input_tree();
    Leaf_Node(root);
    st.sort(greater<int>());
    for (int a : st)
    {
        cout << a << " ";
    }
    return 0;
}