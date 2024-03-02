#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
   int val;
   Node * next;
   Node(int v)
   {
     val =v;
     next = NULL;
   }
};
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
    // Node a,b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    // cout<<(*a).val<<endl;//derefference kore dinamic a er value pelam
    // cout<<a->val<<endl;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    //d->next a NULL thakbe jehetu amra update korini
    // cout<<a->next->val<<endl;
    print_linked_list(head);
    return 0;
}