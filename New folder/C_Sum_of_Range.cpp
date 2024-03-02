#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,a1,a2;
    cin>>a>>b;
    long long sum1=0;
    long long sumodd=0;
    long long sumeven=0;
    if(a>b ||a==b){
        a1 = b;
        a2 = a;
    }
    else
    {
        a1 = a;
        a2 = b;
    }
    for(int i=a1;i<=a2;i++)
    {
        sum1+=i;
        if(i%2!=0)
        {
            sumodd+=i;
        }
        if(i%2==0){
            sumeven+=i;
        }
        
    } 
    cout<<sum1<<endl;
    cout<<sumeven<<endl;
    cout<<sumodd<<endl;
    return 0;
}