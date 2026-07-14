#include <bits/stdc++.h>
using namespace std;

int arr[] = {2, 3, -2, 4};

int main()
{
    int n = sizeof(arr) / sizeof(arr[0]);

    /*int pre = 1;
    int suff = 1;

    int ans = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(pre == 0)
        {
            pre = 1;
        }

        if(suff == 0)
        {
            suff = 1;
        }

        pre *= arr[i];
        suff *= arr[n - i - 1];

        ans = max(ans, max(pre, suff));//optimal solution TC O(n) and space complexity O(1).
    }

    cout << ans;*/
    /*int maxi=arr[0];

    int mini=arr[0];

    int ans=arr[0];

    for(int i=1;i<n;i++)

    {

        if(arr[i]<0)

        {

            swap(maxi,mini);

        }

        maxi=max(arr[i],maxi*arr[i]);

        mini=min(arr[i],mini*arr[i]);

        ans=max(ans,maxi);

    }

    cout<<ans;//optimal solution TC O(n) and space complexity O(1).*/
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)

    {

        int product=1;

        for(int j=i;j<n;j++)

        {

            product*=arr[j];

            maxi=max(maxi,product);

        }

    }

    cout<<maxi;//bruete force solution tc O(n^2) and sc o(1).

    return 0;
}