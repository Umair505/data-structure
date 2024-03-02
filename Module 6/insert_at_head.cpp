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
void insert_at_tail(Node * &head,int v)
{
    Node *newNode = new Node(v); // dinamic node niyechi jate fun return korar por gayeb na hoye jai
    if(head==NULL)//head jodi null hoi taile tell a add kore dao newNode
    {
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)//tmp next null na howa porjontho cholte thako
    {
        tmp = tmp->next;
    }//tmp ekhn last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout<<"Your link list :"<<endl;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int pos,int v)
{
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<endl<<"Inserted at position"<<pos<<endl<<endl;
}
void insert_at_head(Node* &head,int v)
{
 Node* newNode = new Node(v);
 newNode->next = head;
 head = newNode;
 cout<<endl<<"Inserted at head"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: Print linked List"<<endl;
    cout<<"Option 3: Insert at any position"<<endl;
    cout<<"Option 4: Insert at head"<<endl;
    cout<<"Option 5: Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        cout<<"Please enter value: ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if (op == 2)
    {
        print_linked_list(head);
    }
    else if (op == 3)
    {

        int pos,v;
        cout<<"Enter position"<<endl;
        cin>>pos;
        cout<<"Enter value"<<endl;
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else{
             insert_at_position(head,pos,v);
        }
    }
    else if(op == 4)
    {
        int v;
        cout<<"Enter value: "<<endl;
        cin>>v;
        insert_at_head(head,v);
    }
    }

    return 0;
}