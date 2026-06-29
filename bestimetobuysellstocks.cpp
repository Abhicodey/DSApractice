#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,-2,5};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_so_far=arr[0];
    int max_ending_here=arr[0];
    for(int i=1;i<n;i++){
        max_ending_here=max(arr[i],max_ending_here+arr[i]);
        max_so_far=max(max_so_far,max_ending_here);
    }
    cout<<max_so_far;
}