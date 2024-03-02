#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        map<string,int> mp;
        string word;
        stringstream ss(s);
        while (ss>>word)
        {
            mp[word]++;
        }
        int maxN = 0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            maxN = max(maxN,it->second);
        }
        map<string,int>mp2;
        stringstream ss2(s);
        while (ss2>>word)
        {
            mp2[word]++;
            if(maxN==mp2[word])
            {
                cout<<word<<" "<<mp2[word]<<endl;
                break;
            }
        }
    }
     
    return 0;
}