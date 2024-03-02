#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int sumNode(Node* root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;

    int sum = root->val; 
    sum += sumNode(root->left);
    sum += sumNode(root->right);

    return sum;
}

int main()
{
    Node* root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
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

    int result = sumNode(root);
    cout <<result << endl;

    return 0;
}
