#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a==1) cout<<"NO";
    int flag = 1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0) 
        {
            flag = 0;
             break;
        }
    } 
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}