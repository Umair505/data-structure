#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int polic=0,crime=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x>0)
        {
            polic+=x;
        }
        else
        {
            if(polic<1)
            {
                crime++;
            }
            else
            {
                polic--;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}