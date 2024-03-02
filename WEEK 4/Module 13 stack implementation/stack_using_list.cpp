#include<bits/stdc++.h>
using namespace std;
class myStack
{
  public:
    list<int>l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_back();
  }
  int top()
  {
    return l.back();//top mane shobar last er value tai back()
  }
  int size()//O(1)
  {
    return l.size();
  }
  bool empty()
  {
    if(l.size()==0) return true;
    else return false;
  }
};
int main()
{
     myStack st;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }
    while(!st.empty())//empty na howa porjontho
    {
        cout<<st.top()<<endl;
        st.pop();//jeita print hoiche oita delete kore dao
    }
    return 0;
}