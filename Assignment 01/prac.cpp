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
void insert_at_tail(Node *&head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;// tmp null a
    }
    tmp->next = newNode;
}

void print_linked_list(Node* head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_head(Node * &head,int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void delete_position(Node *head,int pos)
{
    Node *tmp = head;
    if(head == NULL)
    { 
        return;
    }
    for(int i = 1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp ->next = tmp->next->next;
    delete deleteNode;
}
void deleteHead(Node* &head)
{
    Node *deleteNode = head;
    if(head == NULL){
        return;
    }
    head = head->next;
    delete deleteNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node* head = NULL;
    int test; cin>>test;
    while(test--)
    {
    
            int x,v;
            cin>>x>>v;
            if(x==0)
            {
            //  if (head == NULL)
            //    {
            //     insert_at_tail(head,v);
            //     print_linked_list(head);
            //    }
            //   else{
                insert_at_head(head,v);
                print_linked_list(head);
            //   }
            }
            else if(x==1)
            {
                insert_at_tail(head,v);
                print_linked_list(head);
            }
            
            else if(x==2)
            {
             if(v==0)
             {
                deleteHead(head);
                print_linked_list(head);
             }
              else if (v < size(head))
              {
                delete_position(head,v);
                print_linked_list(head);
              }
             else{
               print_linked_list(head);
             }
            } 
    }
  
    return 0;
}