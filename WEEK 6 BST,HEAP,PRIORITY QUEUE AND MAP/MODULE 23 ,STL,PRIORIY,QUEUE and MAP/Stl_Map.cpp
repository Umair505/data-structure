#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["Sakib al hasan"] = 79;//O(logN)
    mp["Tamim"] = 19;
    mp["akib"] = 100;
    for(auto it = mp.begin();it !=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }//O(logN)//n shongkhok hole NlogN
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp.insert({"sakib al hasan",75});
    mp.insert({"tamim iqbal",19});
    mp.insert({"shamim",79});
    // mp.insert({"akib",0});
    mp.insert({"Moinul",100});
   
    cout<<mp["Moinul"] <<endl;
    //ache kina check korbo eivabe
    if(mp.count("akib"))
    {
        cout<<"Ase"<< endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }
    return 0;
}
*/