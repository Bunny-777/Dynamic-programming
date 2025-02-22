#include<bits/stdc++.h>
using namespace std;
// most basic approach using the recursion 
int func(int i,int n,vector<int> & vec,int k){
    if(i==n-1){
        return 0;
    }
    int x=INT_MAX;
    for(int ind=1;ind<=k;ind++){
        if(i+ind<n){
            x=min(x,func(i+ind,n,vec,k)+abs(vec[i+ind]-vec[i]));
        }
    }
    return x;
}

int main(){
    vector<int> vec={10, 20,10};
    int k=1;
    int n=vec.size();
    cout<< func(0,n,vec,k);
}