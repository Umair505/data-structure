#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist = {10,20,30,40,50,60,70};
    list<int>newList = {11,12,13};
    // vector<int>v ={1,2,3};
    // newList.assign(mylist.begin(),mylist.end());//longcut
    // newList = mylist; //shortcut
    // mylist.push_back(100);//insert at tail
    // mylist.push_front(200);
    // mylist.pop_back();//tail er val delt korbe
    // mylist.pop_front();//head er val dlt
    // mylist.insert(next(mylist.begin(),2),{100,200,300});//2 number index a insert korbe
    //O(N)
    // mylist.erase(next(mylist.begin(),2));
    // mylist.insert(next(mylist.begin(),3),newList.begin(),newList.end());
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    // replace(mylist.begin(),mylist.end(),30,100);//jotoguli 30 thakbe shobgula 100 dia replace hobe
    
    // for(int val : mylist)
    // {
    //     cout<< val <<endl;
    // } 
    auto it = find(mylist.begin(),mylist.end(),100);
    if(it==mylist.end())
    {
        cout<<"Not Found"<<endl;
    }    
    else
    {
        cout<<"Found"<<endl;
    }
    return 0;
}