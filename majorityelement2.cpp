#include <bits/stdc++.h>
using namespace std;
int arr[] = {1,3,2,1,1,3,3};
int main() {
   /* int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    for (int i = 0; i < n; i++) {

        bool found = false;
        for (int x : ans) {
            if (x == arr[i]) {
                found = true;
                break;
            }
        }

        if (found)
            continue;

        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                cnt++;
            }
        }

        if (cnt > n / 3) {
            ans.push_back(arr[i]);
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }//brute force solution time complexity is O(n^2) and space complexity is O(n)*/
   /* int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> mp;

    vector<int> ans;

    for (int i = 0; i < n; i++) {

        mp[arr[i]]++;

    }

    for (auto it : mp) {

        if (it.second > n / 3) {

            ans.push_back(it.first);

        }

    }


    for (int x : ans) {

        cout << x << " ";

    }//better solution time complexity is O(n) and space complexity is O(n)*/
    int n = sizeof(arr) / sizeof(arr[0]);
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN, ele2 = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (cnt1 == 0 && arr[i] != ele2) {
            ele1 = arr[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0 && arr[i] != ele1) {
            ele2 = arr[i];
            cnt2 = 1;
        }
        else if (arr[i] == ele1) {
            cnt1++;
        }
        else if (arr[i] == ele2) {
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == ele1)
            cnt1++;
        else if (arr[i] == ele2)
            cnt2++;
    }

    vector<int> ans;

    if (cnt1 > n / 3)
        ans.push_back(ele1);

    if (cnt2 > n / 3)
        ans.push_back(ele2);

    for (int x : ans) {
        cout << x << " ";
    }//optimal solution time complexity is O(n) and space complexity is O(1)

    return 0;
}