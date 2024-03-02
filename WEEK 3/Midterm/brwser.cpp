#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       string val;
       Node* next;
       Node* prev;
    Node(string val)
    {
        this->val =val;
        this->next = NULL;
        this->prev =NULL;
    }
};
void insert_tail(Node* &head,Node* &tail,string s)
{
    Node* newNode = new Node(s);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = NULL;
    tail = newNode;
}
Node *find_word(Node* head,string val,Node* send)
{
    Node* tmp = head;
    int flag = 0;
    while(tmp != NULL)
    {
        if(tmp->val == val)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }
    if(flag == 1)
    {
        cout<<val<<endl;
        return tmp;
    }
    else
    {
        cout<<"Not Available"<<endl;
        return send;
    }
}
Node *find_prev(Node* cur)
{
    if(cur==NULL)
    {
        cout<<"Not Available"<<endl;
        return cur->next;
    }
    if(cur->prev == NULL)
    {
        cout<<"Not Available"<<endl;
        return cur;
    }
    else{
        cout<<cur->prev->val<<endl;
        return cur->prev;
    }
}
Node* find_next(Node* cur)
{
    if(cur==NULL)
    {
        cout<<"Not Available"<<endl;
        return cur->prev;
    }
    else if(cur->next == NULL)
    {
        cout<<"Not Available"<<endl;
        return cur;
    }
    else{
        cout<<cur->next->val<<endl;
        return cur->next;
    }
}
void print(Node* head)
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
   Node* head = NULL;
   Node* tail = NULL;
   string s;
   while(true)
   {
    cin>>s;
    if(s=="end") break;
    insert_tail(head,tail,s);
   }
   int q; cin>>q;
   while(q--)
   {
    string com,add;
    cin>>com;
    Node* update;
    Node* send;
    if(com=="visit")
    {
        cin>>add;
        update = find_word(head,add,send);
        send = update;
    }
    else if(com=="prev")
    {
        update = find_prev(update);
        send = update;
    }
    else if(com=="next")
    {
        update = find_next(update);
        send = update;
    }
   }

   return 0;
}