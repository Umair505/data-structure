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
void insert_tail(Node *&head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
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
int size(Node*head)
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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2= NULL;
    Node *tail2 = NULL;
    int val;
    while(true)//O(n)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head1,tail1,val);//time complixity O(1)
    }
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head2,tail2,val);
    }
    if(size(head1)== size(head2))
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}

