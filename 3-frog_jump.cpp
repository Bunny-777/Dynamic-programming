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
// int func(int i,int n,vector<int> & vec,vector<int> & dp){
//     if(i==n-1){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[n];
//     }
//     int l = INT_MAX, r = INT_MAX; 
//     if(i+1<n){
//         l=func(i+1,n,vec,dp)+abs(vec[i+1]-vec[i]);
//     }
//     if(i+2<n){
//         r=func(i+2,n,vec,dp)+abs(vec[i+2]-vec[i]);
//     }
//     dp[i]=min(l,r);
//     return dp[n];
// }

// int main(){
//     vector<int> vec={30, 20, 50, 10, 40};
//     int n=vec.size();
//     vector<int> dp(n+1,-1);
//     cout<<func(0,n,vec,dp);
// }



// tabulation method which only use O(n) time complexity and O(1) space complexity

// int main(){
//     vector<int> vec={30, 20, 50, 10, 40};
//     int n=vec.size();
//     vector<int> dp(n,-1);
//     dp[0]=0;
//     for(int i=1;i<n;i++){
//         int fs=dp[i-1]+abs(vec[i]-vec[i-1]);
//         int ss=INT_MAX;
//         if(i>1){
//              ss=dp[i-2]+abs(vec[i]-vec[i-2]);
//         }
//         dp[i]=min(fs,ss);
//     }
//      cout<<dp[n-1]; 
// }


// using space optmizatoin as where you find index-1 and index-2 there will be space optmisation
int main(){
    vector<int> vec={30, 20, 50, 10, 40};
    int n=vec.size();
    int prev2=0;
    int prev1=abs(vec[1]-vec[0]);
    for(int i=2;i<n;i++){
        int x=prev1+abs(vec[i]-vec[i-1]);
        int y=prev2+abs(vec[i]-vec[i-2]);
        int z=min(x,y);
        prev2=prev1;
        prev1=z;
        cout<<z<<"  ";
    } 
}