#include <bits/stdc++.h>
using namespace std;
int arr[]={4, 3, 6, 2, 1, 1};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    /*for(int i=1;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j]==i){
                    cnt++;
                }
            }
            if(cnt==0){
                cout<<"Missing number is "<<i<<endl;
            }
            else if(cnt==2){
                cout<<"Repeating number is "<<i<<endl;
            }//bruete force solution time complexity is O(n^2) and space complexity is O(1)
        }*/
     /*int hash[n+1]={0};
     for(int i=0;i<n;i++){
         hash[arr[i]]++;
     }
     int repeating=-1,missing=-1;
        for(int i=1;i<=n;i++){
            if(hash[i]==2){
                repeating=i;
            }
            else if(hash[i]==0){
                missing=i;
            }
            if(repeating!=-1 && missing!=-1){
                break;
            }//better solution time complexity is O(n) and space complexity is O(n)
    cout<<"Repeating number is "<<repeating<<endl;
    cout<<"Missing number is "<<missing<<endl;*/ 
    //optimal solution time complexity is O(n) and space complexity is O(1)
    int sn=(n*(n+1))/2;
    int s2n=(n*(n+1)*(2*n+1))/6;
    int s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=arr[i]*arr[i];  
        if(arr[i]==arr[arr[i]-1]){
            cout<<"Repeating number is "<<arr[i]<<endl;
        }
        else{
            swap(arr[i],arr[arr[i]-1]);
            i--;
        }
}
}