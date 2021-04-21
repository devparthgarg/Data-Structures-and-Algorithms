#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    return max;
}

int secondLargest(int arr[],int n)//time comp. O(n) - but it is taking 2 traversals : one in computing largest and and other in computing second largest
{
    int max=largest(arr,n);
    int res=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(res<arr[i] and arr[i]!=max)
        {
            res=arr[i];
        }
    }
    if(i==n)
    {
        return -1;
    }

    return res;
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

    cout<<secondLargest(arr,n);
    return 0;
}