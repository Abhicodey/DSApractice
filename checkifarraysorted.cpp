#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    bool isSorted = true;
    for(int i=0;i<4;i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted in ascending order."<<endl;
    }
    else{
        cout<<"Array is not sorted in ascending order."<<endl;
    }
    return 0;
}