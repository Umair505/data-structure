#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
     vector<int>v;
     void push(int val)
     {
        v.push_back(val);
     }
     void pop()
     {
        v.pop_back();
     }
     int top()
     {
        return v.back();
     }
     bool empty()
     {
        return v.size()==0;
     }
     int size()
     {
        return v.size();
     }
};
class myQueue
{
  public:
   list<int> q;
   void push(int val)
   {
     q.push_back(val);
   }
   void pop()
   {
    q.pop_front();
   }
   int front()
   {
    return q.front();
   }
   int size()
   {
    return q.size();
   }
   bool empty()
   {
    return q.size()==0;
   }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    bool flag = true;
    if(n!=m)
    {
        flag = false;
    }
    while(!st.empty() && !q.empty())
    {
        if(st.top()!= q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if(flag)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}