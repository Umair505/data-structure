#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,a1,a2,r;
    cin>>a>>b;
    if(a>b)
    {
        a1 = a;
        a2 = b;
    }
    else
    {
        a1 = b;
        a2 = a;
    }
    long long gcd;
    while (true)
    {
        r = a1%a2;
        if(r==0) 
        {
            gcd = a2;
            break;
        }
        else
        {
            a1 = a2;
            a2 = r;
        }
    }
    long long int lcm = (a*b)/gcd;
    cout<<gcd<<" "<<lcm;
    return 0;
}