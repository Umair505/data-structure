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
void print_recursion(Node *n)
{
    if(n==NULL) return;//base case
    cout<<n->val<<" ";//normal print
    print_recursion(n->next);

}
void print_reverse(Node *n)
{
    if(n==NULL) return;//base case
    print_reverse(n->next);
    cout<<n->val<<" ";//reverse bhabe print hobe
}
void print(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void reverse(Node* &head,Node *current)
{
  if(current->next == NULL)
  {
    head = current;
    return;
  }
  reverse(head,current->next);
  current->next->next = current;
  current->next = NULL;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    head->next = a;
    a->next = b;
    reverse(head,head);//first head update korar jonno secnd head shamne aganor jonno
    print(head);
    return 0;
}