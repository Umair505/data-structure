#include <bits/stdc++.h>
using namespace std;
vector<int> nums;
list<int> l;
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
void print_leafNode(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        l.push_back(root->val);
    }
    print_leafNode(root->right);
    print_leafNode(root->left);
}
int main()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    print_leafNode(root);
    l.sort(greater<int>());
    for (int x : l)
    {
        cout << x << " ";
    }
    return 0;
}