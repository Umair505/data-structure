#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node* prev;
    Node(int val)
    {
        this->val =val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node*head,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev =newNode;
    newNode->prev = tmp;
}
void insert_at_tail(Node* &head,Node * &tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void printNormal(Node* head)
{
    Node* tmp = head;
    cout<<"L -> ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void printReverse(Node* tail)
{
    cout<<"R -> ";
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void insert_at_head(Node*&head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head== NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q; cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos == 0)
        {
            insert_at_head(head,tail,val);
            printNormal(head);
            printReverse(tail);
        }
        else if(pos == size(head))
        {
            insert_at_tail(head,tail,val);
            printNormal(head);
            printReverse(tail);
        }
        else if(pos> size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            insert(head,pos,val);
            printNormal(head);
            printReverse(tail);
        }

    }
    return 0;
}