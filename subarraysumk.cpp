#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int n = 10;
    //map<int,int> preSumMap;
    int sum = 0;
    int left =0;
    int right = 0;
    int maxLen = 0;

/*
for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = i; j < 10; j++) {
            sum += arr[j];
            if (sum == k) {
                maxLen=max(maxLen,j-i+1); 
            }
        }
    }
    cout<<maxLen; // TC-o(n^2) SC-o(1) */
 /* for(int i = 0; i < n; i++) {

        sum += arr[i];

        if(sum == k) {

            maxLen = i + 1;

        }

        int rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()) {

            int len = i - preSumMap[rem];

            maxLen = max(maxLen, len);

        }

        if(preSumMap.find(sum) == preSumMap.end()) {

            preSumMap[sum] = i;

        }

    }

    cout << maxLen;// TC-o(n) SC-o(n) */
    while (right < n) {
        sum += arr[right];
        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    cout << maxLen; // TC-o(n) SC-o(1)



    return 0;
}