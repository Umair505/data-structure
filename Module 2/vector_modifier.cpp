#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x={10,20,30};
    // vector<int> v={1,2,3};
    // v = x; //O(1)
    // // vector<int> x={10,20,30,50};
    // // vector<int> v={1,2,3};
    // // v = x //O(N)
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // } 
    vector<int> x={10,20,30,40};
    x.pop_back();//jotobar popback korbo pechon theke toto bar element kome jabe
    x.pop_back();
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}