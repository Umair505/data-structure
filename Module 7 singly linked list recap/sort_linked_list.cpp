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
void insert_tail(Node * &head,Node * &tail,int v)
{
    Node *newNode =new Node(v);
    if(head == NULL)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)//O(n)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);//time complixity O(1)
    }
    //O(n^2)
    for(Node *i=head;i->next != NULL;i=i->next) //jei ghore last valuer location thakbe toto ghor porjontho cholbe jokhoni location null hoye jabe loop stop
    {
        for(Node* j=i->next;j != NULL;j=j->next)//j ghore NULL ache she ghor porjontho
        {
           if(i->val > j-> val)
           {
            swap(i->val,j->val);//boro theke choto hole i->val<j->val
           }
        }
    }
    print_linked_list(head);
    return 0;
}