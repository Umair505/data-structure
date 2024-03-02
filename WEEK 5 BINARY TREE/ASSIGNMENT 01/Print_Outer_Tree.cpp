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
void printleft(Node* root)
{
    if(root==NULL) return;
    if(root->left)  printleft(root->left);
    else printleft(root->right);
    cout<<root->val<<" ";
}
void printright(Node* root)
{
   if(root==NULL) return;
   cout<<root->val<<" ";
   if(root->right)  printright(root->right);
   else printright(root->left);
    
}
int main()
{
    Node* root;
    int v; cin>>v;
    if(v==-1) root = NULL;
    else root = new Node(v);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r; cin>>l>>r;
        if(l!=-1) p->left = new Node(l);
        if(r!=-1) p->right = new Node(r);
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    printleft(root->left);
    cout<<root->val<<" ";
    printright(root->right);
}