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
int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);
    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right =h;
    c->right = e;
    b->right =d;
    d->left = f;
    d->right = g;
    h->right = i;
    level_order(root);
    return 0;
}