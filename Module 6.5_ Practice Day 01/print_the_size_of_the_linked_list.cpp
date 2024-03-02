#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
     int val;
     Node *next;
     Node(int val)
     {
       this->val = val;
       this->next = NULL;
     }
};
void insert_at_tail(Node *&head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
      head = newNode;
      return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node * head)
{
    cout<<"Your link list : ";
    Node* tmp= head;
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
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,v);
        
    }
    print_linked_list(head);
    
    return 0;
}