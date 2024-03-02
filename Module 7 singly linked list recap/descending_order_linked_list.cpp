#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
    Node(int val)
    {
        this->val =val;
        this->next = NULL;
    }
};
void insert(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void descending(Node *n)
{
    if(n==NULL) return;
    descending(n->next);
    cout<<n->val<<" ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    descending(head);
    return 0;
}