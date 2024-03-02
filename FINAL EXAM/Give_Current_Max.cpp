#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        else
            return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pr;
    for(int i=0;i<n;i++)
    {
         string name;
            int r,m;
            cin>>name>>r>>m;
            Student newStdnt(name,r,m);
            pr.push(newStdnt);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int r,m;
            cin>>name>>r>>m;
            Student newStdnt(name,r,m);
            pr.push(newStdnt);
            cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks<<endl;
        }
        if (x == 1)
        {
            if (!pr.empty())
            {
                cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks<<endl;
            }
            else
                cout << "Empty" << endl;
        }
        if (x == 2)
        {
            if (!pr.empty())
            {
                pr.pop();
                if (!pr.empty())
                {
                    cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks << endl;
                }
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}