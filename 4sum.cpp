#include <bits/stdc++.h>
using namespace std;
int arr[]={1, 0, -1, 0, -2, 2};
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    /*for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==0){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                    }
                }
            }
        }
    }//bruete force solution time complexity is O(n^4) and space complexity is O(1).*/
    set<vector<int>> st;
    int target=0;
    /*for (int i = 0; i < n - 3; i++) {

        for (int j = i + 1; j < n - 2; j++) {

            unordered_set<int> s;

            for (int k = j + 1; k < n; k++) {

                int fourth = target - (arr[i] + arr[j] + arr[k]);

                if (s.find(fourth) != s.end()) {

                    vector<int> temp = {arr[i], arr[j], arr[k], fourth};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);

                }

                s.insert(arr[k]);

            }

        }

    }

    for (auto quad : st) {

        for (int x : quad) {

            cout << x << " ";

        }

        cout << endl;

    }//better solution time complexity is O(n^3) and space complexity is O(n).*/

    sort(arr, arr + n);

    vector<vector<int>> ans;

    for (int i = 0; i < n - 3; i++) {


        if (i > 0 && arr[i] == arr[i - 1])

            continue;

        for (int j = i + 1; j < n - 2; j++) {

            

            if (j > i + 1 && arr[j] == arr[j - 1])

                continue;

            int left = j + 1;

            int right = n - 1;

            while (left < right) {

                long long sum = 1LL * arr[i] + arr[j] + arr[left] + arr[right];

                if (sum < target) {

                    left++;

                }

                else if (sum > target) {

                    right--;

                }

                else {

                    ans.push_back({arr[i], arr[j], arr[left], arr[right]});

                    left++;

                    right--;

                    

                    while (left < right && arr[left] == arr[left - 1])

                        left++;

                   

                    while (left < right && arr[right] == arr[right + 1])

                        right--;

                }

            }

        }

    }

    for (auto quad : ans) {

        for (int x : quad)

            cout << x << " ";

        cout << endl;

    }// optimal solution time complexity is O(n^3) and space complexity is O(1).


}