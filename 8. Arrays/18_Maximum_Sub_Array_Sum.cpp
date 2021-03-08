#include<bits/stdc++.h>
using namespace std;

//subarray - contigous elements
int maxSubarraySum(int *a,int n)//time comp. O(n)
{
    int ms=0,cs=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(ms,cs);
    }

    return ms;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<maxSubarraySum(arr,n);
    return 0;
}