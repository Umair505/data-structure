#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    // vector<int> :: iterator it;
    // cout<<v.back()<<" ";//last eliment
    // cout<<v[0]<<" ";
    // cout<<v.front()<<" ";//first element 
    for(auto it = v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}