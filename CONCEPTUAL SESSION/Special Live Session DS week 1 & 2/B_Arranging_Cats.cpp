#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int o1=0,o2=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1') o1++;
            if(s2[i]=='1') o2++;
            if(s2[i]!=s1[i] && s2[i]=='1') cnt++;
        }
        int ans = cnt;
        if(o1>o2) ans =ans+ (o1-o2);
        cout<<ans<<endl;
    }
     
    return 0;
}