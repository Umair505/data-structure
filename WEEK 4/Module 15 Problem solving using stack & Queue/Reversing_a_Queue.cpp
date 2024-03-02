//Link->https://www.codingninjas.com/studio/problems/reversing-a-queue_982934?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}
