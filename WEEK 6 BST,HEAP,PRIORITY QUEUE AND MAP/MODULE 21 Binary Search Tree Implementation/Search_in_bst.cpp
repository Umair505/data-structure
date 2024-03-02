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
    int val; cin>>val;
    Node* root;
    if(val==-1) root =NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r; cin>>l>>r;
        if(l==-1) p->left = NULL;
        else p->left = new Node(l);
        if(r==-1) p->right = NULL;
        else p->right = new Node(r);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        //1-ber kore ana
        Node* frnt = q.front();//frnt=front
        q.pop();
        
        //2-jabotio ja kaj ache eita k nia
        cout<<frnt->val<<" ";
        //3-tar children gulake rakha
        if(frnt->left) q.push(frnt->left);//Null ache kina nai check korar shortcut apply korlam frnt->left != NULL eita lenghty
        if(frnt->right) q.push(frnt->right);
    }
}
bool search(Node* root,int x)
{
    if(root==NULL) return false;
    if(root->val == x) return true;
    if(x < root->val)
    {
        return search(root->left,x); //left a x ache kina nai return korbe
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
    Node* root = input_tree();
    if(search(root,10)) cout<<"YES, FOuND";
    else cout<<"NO,NOt Found"<<endl;
    return 0;
}