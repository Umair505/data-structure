#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        set<int> st;
        while (n--)
        {
            int x; cin>>x;
            st.insert(x);
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}