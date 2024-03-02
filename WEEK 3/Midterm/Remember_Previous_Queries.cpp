#include<bits/stdc++.h>
using namespace std;
void printNormal(list<int>mylist)
{
    cout<<"L -> ";
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
void printReverse(list<int>mylist)
{
    mylist.reverse();
    cout<<"R -> ";
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}
int main()
{
    int q; cin>>q;
    list<int>mylist;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            mylist.push_front(val);
            printNormal(mylist);
            printReverse(mylist);
        }
        else if(pos==1)
        {
            mylist.push_back(val);
            printNormal(mylist);
            printReverse(mylist);
        }
        else if(pos==2)
        {
            if(val>=0 && val<mylist.size())
            {
                auto it = next(mylist.begin(),val);
                mylist.erase(it);
            }
            printNormal(mylist);
            printReverse(mylist);
        }
    } 
    return 0;
}