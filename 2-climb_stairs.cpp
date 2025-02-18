// solution link-https://leetcode.com/problems/climbing-stairs/submissions/1547032054
class Solution {
public:
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        int prev1=0;
        int prev2=1;
        int x=0;
        for(int i=0;i<=n;i++){
            x=prev1+prev2;
            prev2=prev1;
            prev1=x;
        }
    return x;
    }
};
