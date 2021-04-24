#include<bits/stdc++.h>
using namespace std;
/*
given an array and a integer k find the maximum
sum of k consecutive elements
*/
int slidingWindow(int a[],int n,int k)//time comp. O(n)
{
    int curr_sum=0;
    
    for(int i=0;i<k;i++)
    {
        curr_sum=curr_sum+a[i];
    }

    int maxSum=curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum=curr_sum+a[i]-a[i-k];
        if(curr_sum>maxSum)
        {
            maxSum=curr_sum;
        }
    }

    return maxSum;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;

    cout<<slidingWindow(a,n,k);
    return 0;
}