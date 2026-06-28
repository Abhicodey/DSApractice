#include <bits/stdc++.h>
using namespace std;
int arr[]={1,1,0,1,1,1,0,1,1};
int main(){
    int max=0;
    int cnt=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        if(cnt>max)
        {
            max=cnt;
        }
    }
    cout<<max;
    return 0;
}