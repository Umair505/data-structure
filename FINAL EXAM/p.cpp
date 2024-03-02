#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    cin.ignore();
    while (n--)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string,int> mp;
        while (ss>>word)
        {
            mp[word]++;
        }
        int maxN = 0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            maxN = max(maxN,it->second);
        }
        cout<<maxN;
        // map<string,int>wordlist2;
        // stringstream two(sentence);
        // while (two>>word)
        // {
        //     wordlist2[word]++;
        //     if(wordlist2[word]==maxN)
        //     {
        //         cout<<word<<" "<<mp[word]<<endl;
        //         break;
        //     }
        // }
        
    }
    
    return 0;
}