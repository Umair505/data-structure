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
void level_order(Node *root,int h,int l)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
       
        // 2. jabotiyo ja kaj ache
        for(int i = l;i<=h;i++)
        {
            if(i==f->val){
                sum+=i;
            }
        }

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout<<sum;
}
Node* convert(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftroot = convert(a,n,l,mid-1);
    Node* rightroot = convert(a,n,mid+1,r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int high; int low;
    cin>>low>>high;
    Node* root = convert(a,n,0,n-1);
    level_order(root,high,low);
    return 0;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* p = q.front();
            q.pop();
            for(int i=low;i<=high;i++)
            {
                if(p->val==i){
                    sum+=i;
                }
            }
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
        return sum;
    }
};