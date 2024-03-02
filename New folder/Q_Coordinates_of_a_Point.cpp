#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    if(a>0 && b>0) cout<<"Q1";
    else if(a<0 && b>0) cout<<"Q2";
    else if( a<0 && b<0) cout<<"Q3";
    else if(a>0 && b<0) cout<<"Q4";
    else if(a==0 && (b<0 || b>0)) cout<<"Eixo Y";
    else if((a<0 || a>0) && b==0) cout<<"Eixo X";  
    else cout<<"Origem";
    return 0;
}