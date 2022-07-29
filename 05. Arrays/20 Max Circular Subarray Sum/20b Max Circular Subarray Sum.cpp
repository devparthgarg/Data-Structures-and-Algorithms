#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
    int curr_sum=0;
    int max_sum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }

    return max_sum;
}

//time: O(n)
int maxCircularSubArraySum(int a[],int n)
{
    /*
    trick: take max of these two
    --> take max sum of normal subarray = kadane's algo
    --> take max sum of a circular subarray = total_sum - minimum_subarray_sum
    */

    int max_normal=kadane(a,n);
    if(max_normal<0)
    {
        return max_normal;
    }

    int total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=a[i];
        a[i]=-a[i];
    }

    int max_circular=total_sum+kadane(a,n);

    return max(max_circular,max_normal);
}

int main()
{
    int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(int);

    cout<<maxCircularSubArraySum(arr,n)<<endl;
    return 0;
}