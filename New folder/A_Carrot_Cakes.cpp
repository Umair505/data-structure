#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t1 = (n*t)/k;
    int t2 = t+d;
    if(t1>t2)
    {
        cout<<"YES"<<endl;
    } 
    else if(t<d)
    {
        cout<<"YES"
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}