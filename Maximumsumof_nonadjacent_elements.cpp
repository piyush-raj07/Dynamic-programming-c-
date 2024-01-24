#include<bits/stdc++.h>
using namespace std;


int help(vector<int>&nums,int n,vector<int>&dp)
{
    if(n==0) return nums[0];
    if(n<0) return 0;
    
    if(dp[n]!=-1) return dp[n];
    int include=nums[n]+help(nums,n-2,dp);
    int exclude=help(nums,n-1,dp)+0;
    dp[n]=max(include,exclude);
    return dp[n];

    //return max(include,exclude);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int ans=0;
    int n=nums.size();
    vector<int>dp(n+1,-1);
    return help(nums,n-1,dp);
}
int main()
{    
    vector<int>nums={1,2,3,4,5};
     int ans=0;
    int n=nums.size();
    vector<int>dp(n+1,-1);
     cout<<help(nums,n-1,dp);
}