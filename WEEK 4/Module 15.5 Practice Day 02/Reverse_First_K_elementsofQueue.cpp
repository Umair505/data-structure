//LINK->https://www.codingninjas.com/studio/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
   stack<int>st;
   for(int i=0;i<k;i++)
   {
     st.push(q.front());
     q.pop();
   }
   queue<int>newQ;
   while(!q.empty())
   {
       newQ.push(q.front());
       q.pop();
   }
   while(!st.empty())
   {
    q.push(st.top());
    st.pop();   
   }
   while(!newQ.empty())
   {
       q.push(newQ.front());
       newQ.pop();
   }
   return q;
}
