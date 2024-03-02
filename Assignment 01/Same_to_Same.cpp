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
    Node* newNode = new Node(v);
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
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    } 
    cout<<endl;
}
bool flag(Node*head1,Node* head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while(tmp1 !=NULL && tmp2!= NULL)
    {
        if(tmp1->val != tmp2->val) return false;
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head2,tail2,val);
    }
    if(flag(head1,head2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}