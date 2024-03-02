#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node* prev;
    Node(int val)
    {
        this->val =val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
  public:
   Node* head =NULL;
   Node* tail = NULL;
   int siz = 0;
  void push(int val)
  {
    siz++;//jokhoni push korbo tokhoni size barbe
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

  }
  void pop()
  {
    siz--;//jokhoni ekta delete hobe tokhoni size ek kore kombe 
    Node* deleteNode = tail;
    tail = tail->prev;
    if(tail == NULL) 
    {
        head = NULL;
    }
    else{
        tail->next = NULL;
    }
    delete deleteNode;
  }
  int top()
  {
    return tail->val;
  }
  int size()//O(1)
  {
    return siz;
  }
  bool empty()
  {
    if(siz==0) return true;
    else return false;
  }
};
int main()
{
     myStack st;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }
    while(!st.empty())//empty na howa porjontho
    {
        cout<<st.top()<<endl;
        st.pop();//jeita print hoiche oita delete kore dao
    }
    return 0;
}