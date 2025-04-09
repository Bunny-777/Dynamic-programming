class Solution {
    public:
        int func(int start,int end,vector<int>& nums) {
            if(start == end) return nums[start];
            int prev1=nums[start];
            int prev2=max(prev1,nums[start+1]);
            for(int i=start+2;i<=end;i++){
                int x=max(prev1+nums[i],prev2);
                prev1=prev2;
                prev2=x;
            }
        return prev2;
        }
    
        int rob(vector<int>& nums) {
            int n=nums.size();
            if(n == 1) return nums[0];
            int a=func(0,n-2,nums);
            int b=func(1,n-1,nums);
            return max(a,b);
        }
    };