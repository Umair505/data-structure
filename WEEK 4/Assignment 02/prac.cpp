#include<bits/stdc++.h>
using namespace std;
void isValid(string s)
{
    stack<char>st;
    for(char c: s)
    {
        if(c=='0')
        {
            if(!st.empty() && st.top()=='1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else if(c=='1')
        {
            if(!st.empty() && st.top()=='0')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }   
    }
     if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        isValid(s);
    } 
    return 0;
}