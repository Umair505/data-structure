#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<q;i++)
    {
        int num; cin>>num;
        auto it = find(v.begin(),v.end(),num);
        if(it==v.end()){
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found"<<endl;
        }
    }
    return 0;
}