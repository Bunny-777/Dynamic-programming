#include<bits/stdc++.h>
using namespace std;

// basic recursion approach 

// int func(int i,int n,vector<int> & vec){
    // if(i==n-1){
    //     return 0;
    // }
    // int l = INT_MAX, r = INT_MAX; 
    // if(i+1<n){
    //     l=func(i+1,n,vec)+abs(vec[i+1]-vec[i]);
    // }
    // if(i+2<n){
    //     r=func(i+2,n,vec)+abs(vec[i+2]-vec[i]);
    // }
    // return min(l,r);
// }

// int main(){
//     vector<int> vec={20, 30, 40, 20};
//     int n=vec.size();
//     cout<< func(0,n,vec);
// }

// memoization approach (stroing values in dp array) having O(N) time complexity and O(n)+O(n) space complexity
int func(int i,int n,vector<int> & vec,vector<int> & dp){
    if(i==n-1){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int l = INT_MAX, r = INT_MAX; 
    if(i+1<n){
        l=func(i+1,n,vec,dp)+abs(vec[i+1]-vec[i]);
    }
    if(i+2<n){
        r=func(i+2,n,vec,dp)+abs(vec[i+2]-vec[i]);
    }
    dp[n]=min(l,r);
    return dp[n];
}

int main(){
    vector<int> vec={30, 20, 50, 10, 40};
    int n=vec.size();
    vector<int> dp(n+1,-1);
    cout<<func(0,n,vec,dp);
}