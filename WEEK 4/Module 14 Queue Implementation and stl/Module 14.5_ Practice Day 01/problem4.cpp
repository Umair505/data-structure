//Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    } 
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}