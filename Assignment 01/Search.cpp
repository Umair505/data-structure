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
int findnumindex(Node* &head,int num)
{
    int index = 0;
    for(Node *i=head;i !=NULL;i=i->next)
    {
        if(i->val == num){
            return index;
        }
        index++;
    }
    return -1;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val,test; cin>>test;
    while(test--)
    {
     while(true)
     {
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
     }
     int num; cin>>num;
     int indx = findnumindex(head,num);
     if(indx==-1) cout<<"-1"<<endl;
     else{
        cout<<indx<<endl;
     }
     head = NULL;//eita na korle head er age ja chilo ta theke jai tai update kore null kore disi porer case a new theke start hobe
     tail = NULL;//tail update kore NULL kore disi porer case er jonno
    }
    return 0;
}