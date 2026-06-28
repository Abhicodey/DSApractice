#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=65;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char(n);
        }
        n=n+1;
        cout<<endl;
    } 
    return 0;
}
