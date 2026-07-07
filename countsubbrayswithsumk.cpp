#include <bits/stdc++.h>
using namespace std;

int arr[] = {4,2,2,6,4};

int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;

    //int count = 0;

   /* for(int i = 0; i < n; i++)
    {
        int xr = 0;

        for(int j = i; j < n; j++)
        {
            xr ^= arr[j];

            if(xr == k)
                count++;
        }
    }

    cout << count;//bruete force solution time complexity O(n^2) and space complexity O(1)*/
   /* for(int i = 0; i < n; i++)

    {

        int xr = 0;

        for(int j = i; j < n; j++)

        {

            xr ^= arr[j];

            if(xr == k)

                count++;

        }

    }

    cout << count;// better solution time complexity O(n) and space complexity O(n)*/
    unordered_map<int,int> mp;

    mp[0] = 1;

    int xr = 0;

    int cnt = 0;

    for(int i = 0; i < n; i++)

    {

        xr ^= arr[i];

        int x = xr ^ k;

        if(mp.find(x) != mp.end())

        {

            cnt += mp[x];

        }

        mp[xr]++;

    }//optimal solution time complexity O(n) and space complexity O(n)

    cout << cnt;
}