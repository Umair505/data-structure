#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        int m,r; cin>>m>>r;
        int sum =0;
        for(int j=m-1;j<r;j++)
        {
            sum +=a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}