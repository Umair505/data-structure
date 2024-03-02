#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a.push_back(x);
    }
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int val:a)
    {
        cout<<val<<" ";
    }
    return 0;
}