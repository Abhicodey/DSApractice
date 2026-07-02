#include <bits/stdc++.h>
using namespace std;
int arr[]={100,1,101,2,3,4,102,1,1};
int main(){
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> st;

    for(int i=0;i<n;i++)

        st.insert(arr[i]);

    int longest = 0;

    for(auto it : st){

        if(st.find(it-1)==st.end()){

            int x = it;

            int cnt = 1;

            while(st.find(x+1)!=st.end()){

                x++;

                cnt++;

            }

            longest = max(longest,cnt);

        }//optimal solution time complexity is O(n) and space complexity is O(n).

    }
    /*int longest=1;
    int cnt=0;
    int smaller=INT_MAX;
    unordered_set<int> s(arr,arr+9);
    sort(arr,arr+9);
    for(int i=0;i<9;i++){
        if(arr[i]-1==smaller){
            cnt++;
            smaller=arr[i];
        }
        else if(arr[i]!=smaller){
            cnt=1;
            smaller=arr[i];
        }
        longest=max(longest,cnt);
    }//better solution time complexity is O(nlogn) and space complexity is O(1).*/
    
    /*for(int i=0;i<9;i++){
        cnt=1;
        for(int j=i+1;j<9;j++){
            if(arr[j]==arr[i]+cnt){
                cnt++;
            }
        }
        longest=max(longest,cnt);
    }// bruete force approach time complexity is O(n^2) and space complexity is O(1).*/
    cout<<longest<<endl;
    return 0;
}