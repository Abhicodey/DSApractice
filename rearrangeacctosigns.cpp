#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4, -2, -3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    vector<int> pos, neg;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int p = pos.size();
    int m = neg.size();

    int i = 0, j = 0, k = 0;

    // Place positives and negatives alternately
    while (i < p && j < m) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // Copy remaining positives
    while (i < p) {
        arr[k++] = pos[i++];
    }

    // Copy remaining negatives
    while (j < m) {
        arr[k++] = neg[j++];
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}