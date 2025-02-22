//basic recursion 
class Solution {
    public:
        int func(int i,int n,vector<int>&nums,vector<int> & dp){
            if(i>=n){
                return 0;
            }
            if(dp[i]!=-1){
                return dp[i];
            }
            int l=func(i+1,n,nums,dp);
            int r=func(i+2,n,nums,dp)+nums[i];
            dp[i]=max(l,r);
        return dp[i];
        }
        int rob(vector<int>& nums) {
            int n=nums.size();
            vector<int> dp(n+1,-1);
            return func(0,n,nums,dp);
            
        }
    };

//memoization approach 
class Solution {
    public:
        int func(int i,int n,vector<int>&nums,vector<int> & dp){
            if(i>=n){
                return 0;
            }
            if(dp[i]!=-1){
                return dp[i];
            }
            int l=func(i+1,n,nums,dp);
            int r=func(i+2,n,nums,dp)+nums[i];
            dp[i]=max(l,r);
        return dp[i];
        }
        int rob(vector<int>& nums) {
            int n=nums.size();
            vector<int> dp(n+1,-1);
            return func(0,n,nums,dp);
            
        }
    };

// tabulation method 
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n=nums.size();
            vector<int> dp(n+1,-1);
            if(n==0){
                return 0;
            }
            if(n==1){
                return nums[0];
            }
            dp[0]=nums[0];
            dp[1] = max(nums[0], nums[1]);
            for(int i=2;i<n;i++){
                dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            }
        return dp[n-1];
        }
    };

//space optimization usign prev1 and prev2
class Solution{
    public:
    int rob(vector<int> & nums){
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        int prev2=nums[0];
        int prev1=max(nums[0],nums[1]);
        int x=0;
        for(int i=2;i<n;i++){
            x=max(prev2+nums[i],prev1);
            prev2=prev1;
            prev1=x;
        }
    return prev1;
    }
};