#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,4,4,5,5};
    /*for(int i=0;i<9;i++){
        int count=0;
        for(int j=0;j<9;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    } TC-o(n^2) SC-o(1) */
    /*int mxi=arr[0];
    for (int i=0;i<9;i++){
        mxi=max(mxi,arr[i]);
    }
    int has[mxi+1]={0};
    for(int i=0;i<9;i++){
        has[arr[i]]++;
    }
    for(int i=0;i<=mxi;i++){
        if(has[i]==1){
            cout<<i<<" ";
        }
    } TC-o(n) SC-o(mxi) */
    unordered_map<int,int> mp;
    for(int i=0;i<9;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<" ";
        }// TC-o(n) SC-o(n)
return 0;
}