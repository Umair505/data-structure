#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        mylist.push_back(val);
    } 
    mylist.sort();
    mylist.unique();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//        int val;
//        Node* next;
//        Node* prev;
//     Node(int val)
//     {
//         this->val =val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print_normal(Node *head)
// {
//     Node* tmp = head;
//     while(tmp != NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
// }
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//     Node* newNode = new Node(val);
//     if(head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }
// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;
//     int val;
//     while(true)
//     {
//         cin>>val;
//         if(val==-1) break;
//         insert_at_tail(head,tail,val);
//     }
//     list<int>mylist;
//     Node* tmp = head;
//     while(tmp!=NULL)
//     {
//         mylist.push_back(tmp->val);
//         tmp = tmp->next;
//     }
//     mylist.sort();
//     mylist.unique();
//     for(int val : mylist)
//     {
//         cout<<val<<" ";
//     }
//     return 0;
// }