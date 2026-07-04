#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,-3,1,1,1,4,2,-3};
int main(){
    int cnt=0;
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
   /*for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int l=i;l<=j;l++){
                sum+=arr[l];
            }
            if(sum==k){
                cnt++;
            }
        }
    }*///brue-force solution time complexity is O(n^3) and space complexity is O(1)
    /*for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                cnt++;
            }
        }
    }*///better solution time complexity is O(n^2) and space complexity is O(1)
    unordered_map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            cnt++;
        }
        if(mp.find(sum-k)!=mp.end()){
            cnt+=mp[sum-k];
        }
        mp[sum]++; 
    }
    cout<<cnt;//optimal solution time complexity is O(n) and space complexity is O(n)
}