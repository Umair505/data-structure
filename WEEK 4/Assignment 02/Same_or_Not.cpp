#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> st;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    } 
    for(int j=0;j<m;j++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    int flag = 1;
    if(n!=m)
    { 
        flag = 0;
    }

    while(!st.empty() && !q.empty())
        {
            if(st.top()!=q.front())
            {
                flag  = 0;
                break;
            }
            st.pop();
            q.pop();
        }
    if(flag==1)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> st;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    } 
    for(int j=0;j<m;j++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(n==m)
    {
      if(st.top()==q.front())
       {
          cout<<"YES"<<endl;
       }
     else{
          cout<<"NO"<<endl;
        }
    }
    
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
*/