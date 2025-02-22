#include<bits/stdc++.h>
using namespace std;
// most basic approach using the recursion 


// int func(int i,int n,vector<int> & vec,int k){
//     if(i==n-1){
//         return 0;
//     }
//     int x=INT_MAX;
//     for(int ind=1;ind<=k;ind++){
//         if(i+ind<n){
//             x=min(x,func(i+ind,n,vec,k)+abs(vec[i+ind]-vec[i]));
//         }
//     }
//     return x;
// }

// int main(){
//     vector<int> vec={10, 20,10};
//     int k=1;
//     int n=vec.size();
//     cout<< func(0,n,vec,k);
// }


// using the memoization approach

// int func(int i,int n,vector<int> & dp,vector<int> & vec,int k){
//     if(i==n-1){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     int x=INT_MAX;
//     for(int ind=1;ind<=k;ind++){
//         if(i+ind<n){
//             x=min(x,func(i+ind,n,dp,vec,k)+abs(vec[i+ind]-vec[i]));
//         }
//     }
//     dp[i]=x;
//     return dp[i];
// }

// int main(){
//     vector<int> vec={10, 20,10};
//     int k=1;
//     int n=vec.size();
//     vector<int> dp(n+1,-1);
//     cout<< func(0,n,dp,vec,k);
// }


// using the tabulation method 

int main(){
    vector<int> vec={10, 30, 40, 50, 20};
    int k=3;
    int n=vec.size();
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        for(int ind=1;ind<=k;ind++){
            if(i-ind>=0){
                dp[i]=min(dp[i],dp[i-ind]+abs(vec[i]-vec[i-ind]));
            }
        }
    }
    cout<<dp[n-1];
    return 0;
}