//Leaders means everything to the right of the element is smaller than the element itself.
//bruete force solution time complexity is O(n^2) and extra space complexity is O(1).
#include <bits/stdc++.h>
using namespace std;    
int arr[]={16, 17, 4, 3, 5, 2};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);  
    /*for (int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }*/
   //optimal solution time complexity is O(n) and space complexity is O(1).
   int max=INT_MIN;
   for(int i=n-1;i>=0;i--){
       if(arr[i]>max){
           cout<<arr[i]<<" ";
           max=arr[i];
       }
    }
}