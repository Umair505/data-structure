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
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root = NULL;
    else root= new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        //ber kore anlam
        Node* p = q.front();
        q.pop();
        //jabotio ja kaj
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1)
          myleft=NULL;
        else 
        myleft = new Node(l);
        if(r==-1)
         myright =NULL;
        else
        myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        //children gula k push kora
        if(p->left)
         q.push(p->left);
        if(p->right)
         q.push(p->right);
    }
    return root;
}
int count(Node* root)
{
    if(root==NULL) return 0;
    int l =count(root->left);
    int r = count(root->right);
    return l+r+1;
}
int main()
{
    Node* root =input_tree();
    cout<<count(root)<<endl;
    return 0;
}
//input-10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1