#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    } 
    sort(v.begin(),v.end());
    int max,smax;
    for(int i=0;i<n;i++)
    {
        max = v[n-1];
        smax = v[n-2];
    }
    cout<<(max-1)*(smax-1);
    return 0;
}
/* link->https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxm,smaxm;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            maxm = nums[n-1];
            smaxm = nums[n-2];
        }
        int ans =(maxm-1)*(smaxm-1);
        return ans;
    }
};
*/