#include <bits/stdc++.h>
using namespace std;
int arr[]={3,2,1};
int main()
{
    /*int n=sizeof(arr)/sizeof(arr[0]);// optimal stl approach time complexity O(n) and space complexity O(1)
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;*/
    /*
    int n = sizeof(arr) / sizeof(arr[0]);// bruete force approach time complexity O(n*n!) and space complexity O(n*n!)

    int original[10];
    for (int i = 0; i < n; i++)
        original[i] = arr[i];

    // Step 1: Sort to start from the first permutation
    sort(arr, arr + n);

    int perms[10][10];   // Stores all permutations (works for n <= 8)
    int count = 0;

    // Step 2: Generate all permutations
    do {
        for (int i = 0; i < n; i++)
            perms[count][i] = arr[i];
        count++;
    } while (next_permutation(arr, arr + n));

    // Step 3: Find the original permutation
    int index = -1;
    for (int i = 0; i < count; i++) {
        bool same = true;
        for (int j = 0; j < n; j++) {
            if (perms[i][j] != original[j]) {
                same = false;
                break;
            }
        }
        if (same) {
            index = i;
            break;
        }
    }

    // Step 4: Print the next permutation
    if (index == count - 1)
        index = 0;
    else
        index++;

    cout << "Next Permutation: ";
    for (int i = 0; i < n; i++)
        cout << perms[index][i] << " ";
}*/
    int n = sizeof(arr) / sizeof(arr[0]);// optimal approach time complexity O(n) and space complexity O(1)

    int index = -1;

    // Step 1: Find pivot
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }

    // Step 2: If no pivot, reverse entire array
    if (index == -1) {
        reverse(arr, arr + n);
    }
    else {

        // Step 3: Find just larger element
        for (int i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Step 4: Reverse suffix
        reverse(arr + index + 1, arr + n);
    }

    // Print answer
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}