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
int count(Node* root)
{
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}
int maxHeight(Node*root)
{
    if(root==NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}
int main()
{
    Node* root;
    int val; cin>>val;
    if(val==-1) root=NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        if(l!=-1)
        {
            p->left = new Node(l);
        }
        if(r!=-1)
        {
            p->right = new Node(r);
        }
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }   
    int t = count(root);
    int h = maxHeight(root);
    int ans = pow(2,h) -1;
    if(t==ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}