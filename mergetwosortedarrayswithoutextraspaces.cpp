#include <bits/stdc++.h>
using namespace std;

int arr1[] = {1,2,3,0,0,0};
int arr2[] = {2,5,6};

int main()
{
    int m = 3;
    int n = 3;

   //vector<int> temp;

    //int i = 0;
    //int j = 0;

   /* while(i < m && j < n)
    {
        if(arr1[i] <= arr2[j])
            temp.push_back(arr1[i++]);
        else
            temp.push_back(arr2[j++]);
    }

    while(i < m)
        temp.push_back(arr1[i++]);

    while(j < n)
        temp.push_back(arr2[j++]);

    for(int i = 0; i < m+n; i++)
        cout << temp[i] << " ";//brute force solution time complexity O(m+n) and space complexity O(m+n)*/
   /*for(int i = 0; i < n; i++)

    {

        arr1[m+i] = arr2[i];

    }

    sort(arr1, arr1+m+n);

    for(int i = 0; i < m+n; i++)

    {

        cout << arr1[i] << " ";

    }//better solution time complexity O(m+n) and space complexity O(1)*/
    int i = m - 1;

    int j = n - 1;

    int k = m + n - 1;

    while(i >= 0 && j >= 0)

    {

        if(arr1[i] > arr2[j])

        {

            arr1[k] = arr1[i];

            i--;

        }

        else

        {

            arr1[k] = arr2[j];

            j--;

        }

        k--;

    }

    while(j >= 0)

    {

        arr1[k] = arr2[j];

        j--;

        k--;

    }

    for(int i = 0; i < m+n; i++)

    {

        cout << arr1[i] << " ";

    }
}