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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    //connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    Node *slow = head;
    Node *fast = head;
    bool flag =false;
    //O(N)
    while(fast != NULL && fast->next != NULL)
    //fast null na how porjontho ar fast->next null na howa porjontho loop cholbe
    {
        slow = slow->next;//1ghor kore agabe
        fast = fast->next->next;//2 ghor kore agabe
        if(fast == slow)
        {
            flag = true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Cycle Detected"<<endl;
    }
    else 
    {
        cout<<"No Cycle"<<endl;
    }
    return 0;
}