#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int small,secondsmall = INT_MAX;
    int large,secondlarge = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i] > large){
            secondlarge = large;
            large = arr[i];
        }
        else if(arr[i] > secondlarge && arr[i] != large){
            secondlarge = arr[i];
        }
        if(arr[i] < small){
            secondsmall = small;
            small = arr[i];
        }
        else if(arr[i] < secondsmall && arr[i] != small){
            secondsmall = arr[i];
        }
    }
    cout<<"Second largest element is: "<<secondlarge<<endl;
    cout<<"Second smallest element is: "<<secondsmall<<endl;
    return 0;
}