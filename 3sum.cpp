#include <bits/stdc++.h>
using namespace std;
int arr[]={1,-2,1,0,-1,2};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    //set<vector<int>> ans;
    set<vector<int>> st;
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
            }
        }
    }
    for(auto it:ans){
        for(int x:it){
            cout<<x<<" "; 
        }//brute force solution time complexity is O(n^3) and space complexity is O(n)
        cout<<endl;
    }*/
   /*for (int i = 0; i < n; i++) {

        unordered_set<int> hashSet;

        for (int j = i + 1; j < n; j++) {

            int third = -(arr[i] + arr[j]);

            if (hashSet.find(third) != hashSet.end()) {

                vector<int> temp = {arr[i], arr[j], third};

                sort(temp.begin(), temp.end());

                st.insert(temp);

            }

            hashSet.insert(arr[j]);

        }

    }

    for (auto it : st) {

        for (int x : it)

            cout << x << " ";

        cout << endl;

    }*/
   sort(arr, arr + n);

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1;

        int k = n - 1;

        while (j < k) {

            int sum = arr[i] + arr[j] + arr[k];

            if (sum < 0) {

                j++;

            }

            else if (sum > 0) {

                k--;

            }

            else {

                ans.push_back({arr[i], arr[j], arr[k]});

                j++;

                k--;

                
                while (j < k && arr[j] == arr[j - 1])

                    j++;

               

                while (j < k && arr[k] == arr[k + 1])

                    k--;

            }

        }

    }

    for (auto it : ans) {

        for (int x : it)

            cout << x << " ";

        cout << endl;//optimal solution time complexity is O(n^2) and space complexity is O(1)

    }

    return 0;
}