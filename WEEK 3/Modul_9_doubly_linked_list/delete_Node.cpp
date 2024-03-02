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
void print_normal(Node *head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void insert_at_anyPos(Node *head,int pos,int val)
{
    Node *newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    } // jeikhane insert korbo tar ag porjontho pouchabo
    //input 10 20 30 40//2number index a insert korbo 100
    newNode->next = tmp->next;//100->30
    tmp->next = newNode;//20->100
    newNode->next->prev = newNode;//100<-30 30 er prev a 100
    newNode->prev = tmp; //20<-100  100 er prev 20
}
void delete_at_pos(Node *head,int pos)
{
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp ->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void deleteTail(Node* &tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void deleteHead(Node *&head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
int size(Node *head)
{
    Node *tmp = head;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node *tail = c;
    //connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos;
    cin>>pos;
    if(pos>= size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos == 0)
    {
        deleteHead(head);
    }
    else if(pos == size(head)-1)
    {
        deleteTail(tail);
    }
    else 
    {
        delete_at_pos(head,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}