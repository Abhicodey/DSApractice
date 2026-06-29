#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,-2,5};
int sum=0;
int maxsum=INT_MIN;
int main()
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=-1,end=1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)start=i;
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        if(maxsum<sum)
        {
            maxsum=sum;
            start=start;
            end=i;
        }
    }
    printf("Maximum sum of contiguous subarray is: %d", maxsum);
    printf("\nStarting index: %d", start);
    printf("\nEnding index: %d", end);
    return 0;
}// kadane's algorithm o(n) time complexity and o(1) space complexity