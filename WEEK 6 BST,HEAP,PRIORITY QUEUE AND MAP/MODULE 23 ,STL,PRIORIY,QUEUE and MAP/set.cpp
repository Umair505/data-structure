#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        s.insert(x);//O(logn)
    }
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    //searching O(logN)
    cout<<endl;
    cout<<s.count(100)<<endl;//true false return kore 0 1 dia ache kina nai
    if(s.count(101)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}