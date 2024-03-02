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
void insert(Node *&head,Node*&tail,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
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
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true)
    {
        cin>>value;
        if(value==-1) break;
        insert(head,tail,value);
    }
    for(Node *i=head;i != NULL;i=i->next)
    {
        for(Node* j=i;j->next!= NULL;)
        {
           if(i->val == j->next->val)
           {
             Node* delete_duplicate = j->next;
             j->next = j->next->next;
             delete delete_duplicate;
           }
           else{
            j = j->next;
           }
        }
    }
    print_linked_list(head);
    return 0;
}