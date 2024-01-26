#include<bits/stdc++.h>
using namespace std;

 void help(vector<int>& coins, int amount,int i,int &ans,int temp)
    {
        if(amount==0) 
        {  if(ans==-1) ans=temp;
          else ans=min(ans,temp);
           return;  
        }
         if (i == coins.size() || amount < 0)
        return;
        
        temp++;
        help(coins,amount-coins[i],i,ans,temp);
        temp--;

        help(coins,amount,i+1,ans,temp);

    }

    int main()
    {
        vector<int>nums={1,2,5};
        int amount=11;
        int ans=-1;
        help(nums,amount,0,ans,0);
        cout<<ans;
    }
