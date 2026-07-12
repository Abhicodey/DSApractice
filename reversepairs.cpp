#include <bits/stdc++.h>
using namespace std;
int arr[]={24,1,56,3,80,12};
/*int main()
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>2*arr[j])
            {
                count++;
            }
        }//brute force approach time complexity O(n^2) and space complexity O(1)
    }
    cout<<count;
}*/ 
int countPairs(int low, int mid, int high)

{

    int right = mid + 1;

    int count = 0;

    for(int i = low; i <= mid; i++)

    {

        while(right <= high && arr[i] > 2LL * arr[right])

        {

            right++;

        }

        count += (right - (mid + 1));

    }

    return count;

}

void merge(int low, int mid, int high)

{

    vector<int> temp;

    int left = low;

    int right = mid + 1;

    while(left <= mid && right <= high)

    {

        if(arr[left] <= arr[right])

        {

            temp.push_back(arr[left]);

            left++;

        }

        else

        {

            temp.push_back(arr[right]);

            right++;

        }

    }

    while(left <= mid)

    {

        temp.push_back(arr[left]);

        left++;

    }

    while(right <= high)

    {

        temp.push_back(arr[right]);

        right++;

    }

    for(int i = low; i <= high; i++)

    {

        arr[i] = temp[i - low];

    }

}

int mergeSort(int low, int high)

{

    int count = 0;

    if(low >= high)

        return count;

    int mid = (low + high) / 2;

    count += mergeSort(low, mid);

    count += mergeSort(mid + 1, high);

    count += countPairs(low, mid, high);

    merge(low, mid, high);

    return count;

}

int main()

{

    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = mergeSort(0, n - 1);

    cout << ans << endl;

    return 0;//optimal solution using merge sort time complexity O(nlogn) and space complexity O(n)

}