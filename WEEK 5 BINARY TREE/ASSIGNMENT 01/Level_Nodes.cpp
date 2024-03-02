#include<bits/stdc++.h>
using namespace std;

class Bnode
{
public:
    int val;
    Bnode* left;
    Bnode* right;

    Bnode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int maxHeight(Bnode* root) {
    if (root == NULL)
        return -1;
    
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    
    return max(l, r) + 1;
}
void printNodesAtLevel(Bnode* root, int TLevel)
{
    if (root == NULL)
        return ;

    queue<Bnode*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    while (!q.empty())
    {
        Bnode* node = q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==TLevel)
            {
                cout<<node->val<<" ";
            }
            if(node->left)q.push(node->left);
            if(node->right) q.push(node->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }      
    
} 

int main()
{
    Bnode* root;
    int val; cin >> val;
    if (val == -1) root = NULL;
    else root = new Bnode(val);

    queue<Bnode*> q;
    q.push(root);

     while(!q.empty())
    {
        Bnode* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        if(l!=-1)
        {
            p->left = new Bnode(l);
        }
        if(r!=-1)
        {
            p->right = new Bnode(r);
        }
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }   

    int l; cin >> l;
    if(l>maxHeight(root)) cout<<"Invalid";
    printNodesAtLevel(root, l);

    return 0;
}
