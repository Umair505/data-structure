#include<bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)//O(1)
    {
        v.push_back(val);
    }
    void pop()//O(1)
    {
        v.pop_back();
    }
    int top()//value access kore ferot dei tai int
    //O(1)
    {
        return v.back();
    }
    int size() //O(1)
    {
        return v.size();
    }
    bool empty() //O(1)
    {
        if(v.size()==0) return true;
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
        int x;//ekta ekta value nibo
        cin>>x;
        st.push(x);//value gulo stack a dia dilam
    }
    while (!st.empty())//jotokkhon false dibe totokkhn mane jotokkhon empty na totokkhon
    {
        cout<<st.top()<<endl;//print kore niche delete kore dao
        st.pop();    
    }
    
    /* lengthy process
    st.push(10);//insert top
    st.push(20);//insert top
    cout<<st.top()<<endl;
    st.pop();//delete top
    cout<<st.top()<<endl;
     st.pop();
    if(st.empty() == false)//stack a kisu ekta ache
    {
        cout<<st.top()<<endl;
    }
    */
    return 0;
}