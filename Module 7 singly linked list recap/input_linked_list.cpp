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
void insert_tail(Node * &head,Node * &tail,int v)
{
    Node *newNode =new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)//O(n)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);//time complixity O(1)
    }
    int maxm = INT_MIN;
    for(Node* i =head;i!= NULL; i=i->next)
    {
        maxm = max(maxm,i->val);
    }
    cout<<maxm;
    return 0;
}