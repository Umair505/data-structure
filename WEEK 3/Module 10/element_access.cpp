#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist = {10,20,30,40,50};
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl; 
    cout<< *next(mylist.begin(),3)<<endl;//3 number index eita dia amra i tomo index er val access korte pari
    return 0;
}