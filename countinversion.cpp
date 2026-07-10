#include <bits/stdc++.h>
using namespace std;
int arr[]={4, 3, 6, 2, 1, 1};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
   /*for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }       
        }
    }
    cout<<"Inversion count is "<<cnt<<endl;
//brute force solution time complexity is O(n^2) and space complexity is O(1).*/

//better solution using merge sort time complexity is O(nlogn) and space complexity is O(n).
    int temp[n];
    function<int(int,int)> mergeSort=[&](int l,int r)->int{
        if(l>=r){
            return 0;
        }
        int mid=(l+r)/2;
        int inv=mergeSort(l,mid);
        inv+=mergeSort(mid+1,r);
        int i=l,j=mid+1,k=l;
        while(i<=mid && j<=r){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                inv+=(mid-i+1);
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
        return inv;
    };
    cout<<"Inversion count is "<<mergeSort(0,n-1)<<endl;
}