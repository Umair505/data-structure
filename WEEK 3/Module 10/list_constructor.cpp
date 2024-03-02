#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist;
    //copy list
    // list<int>list2 = {1,2,3,4,5};
    // list<int>mylist(list2);
    // int a[5] ={10,20,30,40,50};//O(N)
    vector<int> v = {1,2,3,4,5};//O(N)
    list<int>mylist(v.begin(),v.end());
    // list<int> mylist(5,5);//O(N)
    // cout<< mylist.size();
    //index lagle ei loop chalabo
    // for(auto it = mylist.begin(); it != mylist.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    //shortcut
    for(int val: mylist)//mylist theke value val er moddhe dia dilam
    {
        cout<<val<<endl;
    }
    return 0;
}