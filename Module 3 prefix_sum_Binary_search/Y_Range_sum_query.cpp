#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    long long pre[n];
    pre[0] = a[0];
    for(int i=1;i<n;i++)
    {
        pre[i] = a[i] + pre[i-1];
    }
    while(q--)
    {
        long long left,right;
        cin>>left>>right;
        left--;
        right--;
        long long sum;
        if(left == 0) sum = pre[right];
        else sum = pre[right] - pre[left-1];
        cout<<sum<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin>>n>>q;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         l--;
//         r--;
//         int sum =0;
//         for(int i=l;i<=r;i++)
//         {
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }