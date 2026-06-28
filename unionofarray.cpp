#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    /*set<int> unionSet;
    for(int i=0;i<5;i++){//n1logn
        unionSet.insert(arr1[i]);
    }
    for(int i=0;i<5;i++){//n2logn
        unionSet.insert(arr2[i]);
    }
    for(auto it: unionSet){//n1+n2
        cout<<it<<" ";
    }// time complexity is 0(n1logn+n2logn)+0(n1+n2)
    // space complexity is 0(n1+n2)*/
    int j=0;
    int i=0;
    while (i<5 && j<5){//n and m are the sizes of the two arrays
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }

    }
    while (i < 5) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < 5) {
        cout << arr2[j] << " ";
        j++;
    }
    return 0;// Time Complexity O(m+n) Space Complexity O(1)
}