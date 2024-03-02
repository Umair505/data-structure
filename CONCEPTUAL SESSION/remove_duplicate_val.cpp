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
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    Node* tmp = head;
    while (tmp!= NULL && tmp->next != NULL)
    {
        if(tmp->val == tmp->next->val)
        {
            Node* delNode = tmp->next;
            tmp->next = delNode->next;
            delete delNode;
        }
        else
        tmp = tmp->next;
    }
    print_list(head);
    return 0;
}
//LINK->https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1128324891/