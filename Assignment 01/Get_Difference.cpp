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
void insert(Node * &head,Node *&tail,int v)
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
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    } 
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    int maxm = INT_MIN;
    int minm = INT_MAX;
    for(Node* i =head;i != NULL; i=i->next)
    {
        maxm = max(maxm,i->val);
        minm = min(minm,i->val);
    }
    int ans = maxm - minm;
    cout<<ans<<endl;
    return 0;
}