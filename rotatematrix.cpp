#include <bits/stdc++.h>
using namespace std;
int matrix[3][3]={
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
int main(){
    int n=3;
   /* int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[j][4-1-i]=matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }//bruete force time complexity is O(n^2) and space complexity is O(n^2)*/
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }//optimal solution time complexity is O(n^2) and space complexity is O(1)

}
   