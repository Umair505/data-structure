#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
     string name;
     int roll;
    Student(string name,int roll)
    {
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
    public:
     bool operator()(Student a,Student b)
     {
        if(a.name > b.name)
        {
             return true;
        }
        else if(a.name < b.name){
             return false;
        }
        else
        {
            if(a.roll < b.roll) return true;
            else return false;
        }
     }
};
int main()
{
    int n; cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)   
    {
        string name;
        int roll;
        cin>>name>>roll;
        Student obj(name,roll);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<endl;
        pq.pop();
    }
    
    return 0;
}