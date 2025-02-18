#include<bits/stdc++.h>
using namespace std;

int func(int n,vector<int>& dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=func(n-1,dp)+func(n-2,dp);
}
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     cout<<func(n,dp);
//     return 0;
// }

// this is using O(n)time complexity to visit all the number fibo and also O(n)+O(n) space complexity because of recurion stack space and vector raw_storage_iterator


// better way of doing it using only O(n) time and O(n) space complexity

// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>> n;
//     vector<int> dp(n+1,-1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<< dp[n];
// }



// most optimal way of doing this problem in O(n) time complexity and O(1) space complexity

int main(){
    int n;
    cout<<"Enter a number ";
    cin>> n;
    if(n==0) cout<<0;
    if(n==1) cout<<1;
    int prev=1;
    int prev2=0;
    int x=0;
    for(int i=2;i<=n;i++){
        x=prev+prev2;
        prev2=prev;
        prev=x;
    }
    cout<<x;
}


