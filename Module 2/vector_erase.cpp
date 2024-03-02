#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+3);//3 number index er element delete hoye jabe
    v.erase(v.begin()+1,v.begin()+4);//1 theke 4 porjontho delete hoye jabe v.end()-1 diyeo delete kora jai
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}