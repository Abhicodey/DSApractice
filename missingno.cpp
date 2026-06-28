#include <bits/stdc++.h>
using namespace std;
int arr[4]={1,2,3,5};
//int has[6]={0};
int main(){
  /*  for (int i=1;i<5;i++)
    {
       int flag=0;
    for (int j=0;j<4;j++){
        if (arr[j]==i)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<i<<" ";
    }
    } bruete force */
   /* for (int i = 0; i < 4; i++) {       
        has[arr[i]]++; 
    }
    for (int i = 1; i < 6; i++) {        
        if (has[i] == 0) {
            cout << i << " ";
        }*/
    /*int sum1=(5*6)/2;
    int sum2=0;
    for (int i = 0; i < 4; i++) {
        sum2 += arr[i];
    }
    cout << sum1 - sum2 << " "; sum wala tarika for optimal solution*/
   /*int XOR1=0;
    int XOR2=0;
    for (int i=0;i<5;i++)
    {
        XOR1 ^= i+1;
        XOR2 ^= arr[i];
    }
    cout << (XOR1 ^ XOR2) << " "; //XOR wala tarika for optimal solution

    return 0;*/
}
