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
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void find_mid(Node *head,int count)
{
  Node* tmp = head;
  int mid = count/2;
  for(int i=0;i<mid-1;i++)
  {
    tmp = tmp->next;
  }
  if(count%2==1)
  {
    cout<<tmp->next->val<<endl;
  } 
  else
  {
    cout<<tmp->val<<" "<<tmp->next->val<<endl;
  }
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int count = 0;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        count++;
        insert_at_tail(head,tail,val);
    }
    find_mid(head,count);
    return 0;
}