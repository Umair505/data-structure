#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4,area;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1==x2)
        {
             area=pow(sqrt(pow((x2-x1),2)+pow((y2-y1),2)),2);
        }
        if(x1==x3){
             area=pow(sqrt(pow((x3-x1),2)+pow((y3-y1),2)),2);
        }
        if(x1==x4){
             area=pow(sqrt(pow((x4-x1),2)+pow((y4-y1),2)),2);
        }
        if(x2==x3){
             area=pow(sqrt(pow((x3-x2),2)+pow((y3-y2),2)),2);
        }
        if(x2==x4){
             area=pow(sqrt(pow((x4-x2),2)+pow((y4-y2),2)),2);
        }
        if(x3==x4){
             area=pow(sqrt(pow((x4-x3),2)+pow((y4-y3),2)),2);
        }
        cout<<area<<endl;
    }
     
    return 0;
}