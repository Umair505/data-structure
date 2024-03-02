// Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

#include<bits/stdc++.h>
using namespace std;
class mystack
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
     int size()
     {
        return v.size();
     }
     bool empty()
     {
        return v.empty();
     }
};
int main()
{
    mystack st1,st2;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        st2.push(y);
    }
    int flag = 1;
    while(!st1.empty() && !st2.empty())
    {
        if(st1.top() != st2.top())
        {
            flag = 0;
            break;
        }
        st1.pop();
        st2.pop();
    }
    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}