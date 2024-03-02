#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            return mid;//paisi
        }
        if(target> arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;//value painai
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    sort(a,a+n);//O(NlogN)
    int res =binary_search(a,n,4);//O(logN)
    cout<<res;
    // if(binary_search(a,n,0)) cout<<"YES";
    // else cout<<"NO";
    return 0;
}
/*
bool binary_search(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            return true;//paisi
        }
        if(target> arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return false;//value painai
}
*/