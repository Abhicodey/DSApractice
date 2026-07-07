#include <bits/stdc++.h>
using namespace std;

int arr[] = {15,-2,2,-8,1,7,10,23};

int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);

    /*int maxi = 0;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = i; j < n; j++)
        {
            sum += arr[j];

            if(sum == 0)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }//brute force solution time complexity O(n^2) and space complexity O(1)*/
      unordered_map<int,int> mp;

    int sum = 0;

    int maxi = 0;

    for(int i = 0; i < n; i++)

    {

        sum += arr[i];

        if(sum == 0)

        {

            maxi = i + 1;

        }

        if(mp.find(sum) != mp.end())

        {

            maxi = max(maxi, i - mp[sum]);

        }

        else

        {

            mp[sum] = i;

        }

    }

    cout << maxi;
}