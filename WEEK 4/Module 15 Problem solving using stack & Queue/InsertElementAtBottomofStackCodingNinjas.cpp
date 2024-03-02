//https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> newSt;
    while(!myStack.empty())
    {
        newSt.push(myStack.top());
        myStack.pop();
    }
    newSt.push(x);
    while(!newSt.empty())
    {
        myStack.push(newSt.top());
        newSt.pop();
    }
    return myStack;
}
