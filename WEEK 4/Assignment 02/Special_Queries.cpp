#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    queue<string>myQ;
    while(q--)
    {
       int n;
       cin>>n;
       if(n==0)
       {
         string s;
         cin>>s;
         myQ.push(s);
       }
       else if(n==1)
       {
         if(!myQ.empty())
         {
            cout<<myQ.front()<<endl;
            myQ.pop();
         }
         else
         {
            cout<<"Invalid"<<endl;
         }

       }

    } 
    return 0;
}