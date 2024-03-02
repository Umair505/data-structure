#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30};
    // cout<< mylist.max_size();
    // mylist.clear();
    mylist.resize(2); 
    mylist.resize(5,100);//last er ghor gulo 100 dia replace hobe
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}