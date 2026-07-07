#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[] = {
    {8,10},
    {1,3},
    {2,6},
    {15,18},
    {17,20}
};

int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    vector<pair<int,int>> ans;

    pair<int,int> current = arr[0];
/*
    for(int i = 1; i < n; i++)
    {
        if(arr[i].first <= current.second)
        {
            current.second = max(current.second, arr[i].second);
        }
        else
        {
            ans.push_back(current);
            current = arr[i];
        }
    }

    ans.push_back(current);

    cout << "Merged Intervals:\n";

    for(auto x : ans)
    {
        cout << "[" << x.first << "," << x.second << "] ";
    }// better solution time complexity: O(n log n) and space complexity: O(n)*/
     for(int i = 1; i < n; i++)

    {

        if(arr[i].first <= current.second)

        {

            current.second = max(current.second, arr[i].second);

        }

 

        else

        {

            ans.push_back(current);

            current = arr[i];

        }

    }


    ans.push_back(current);


    cout << "Merged Intervals:\n";

    for(auto x : ans)

    {

        cout << "[" << x.first << "," << x.second << "] ";

    }// optimal solution time complexity: O(n log n) and space complexity: O(1)

    return 0;
}