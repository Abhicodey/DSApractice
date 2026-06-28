#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
   /* int inter[5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[i]==arr2[j]&& inter[i]==0){
                cout<<arr1[i]<<" ";
                inter[i]=1;
                break;
            }
            if(arr1[j]>arr2[i]){
                break; }
            
        }// Time Complexity O(n1*n2) Space Complexity O(n1)
}
    }*/
   int i =0,j=0;
    while(i<5 && j<5){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;}
        else{
            j++;
        }
    }
    return 0;
}// Time Complexity O(n1+n2) Space Complexity O(1)

