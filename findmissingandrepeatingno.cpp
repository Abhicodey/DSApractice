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
        }
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
        }
    
}
cout<<"Repeating number is "<<repeating<<endl;
cout<<"Missing number is "<<missing<<endl;*/
/*int sn=(n*(n+1))/2;
int s2n=(n*(n+1)*(2*n+1))/6;
int s=0,s2=0;
for(int i=0;i<n;i++){
    s+=arr[i];
    s2+=arr[i]*arr[i];
}
int val1=s-sn;
int val2=s2-s2n;
val2=val2/val1;
int x=(val1+val2)/2;
int y=x-val1; 
cout<<"Repeating number is "<<x<<endl;
cout<<"Missing number is "<<y<<endl;*/
int xr=0;
for(int i=0;i<n;i++){
    xr=xr^arr[i];
    xr=xr^(i+1);
}
int bitno=0;
while(1){
    if(xr & (1<<bitno)){
        break;
    }
    bitno++;
}
int zero=0,one=0;
for(int i=0;i<n;i++){
    if(arr[i] & (1<<bitno)){
        one=one^arr[i];
    }
    else{
        zero=zero^arr[i];
    }
}
for(int i=1;i<=n;i++){
    if(i & (1<<bitno)){
        one=one^i;
    }
    else{
        zero=zero^i;
    }
}
cout<<"Repeating number is "<<one<<endl;
cout<<"Missing number is "<<zero<<endl;
return 0;
}