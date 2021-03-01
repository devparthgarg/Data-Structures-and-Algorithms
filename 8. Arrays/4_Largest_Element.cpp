#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)//time comp. O(n)
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

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<largest(arr,n);
    return 0;
}