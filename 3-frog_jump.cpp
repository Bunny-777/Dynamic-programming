#include<bits/stdc++.h>
using namespace std;



int func(int i,int n,vector<int> & vec){
    if(i==n-1){
        return 0;
    }
    int l = INT_MAX, r = INT_MAX; 
    if(i+1<n){
        l=func(i+1,n,vec)+abs(vec[i+1]-vec[i]);
    }
    if(i+2<n){
        r=func(i+2,n,vec)+abs(vec[i+2]-vec[i]);
    }
    return min(l,r);
}



int main(){
    vector<int> vec={20, 30, 40, 20};
    int n=vec.size();
    cout<< func(0,n,vec);
}