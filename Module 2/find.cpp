#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,2,2,3,6,8,9};
    auto it = find(v.begin(),v.end(),100);
    if(it==v.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}