#include<bits/stdc++.h>
using namespace std;

int trapRainWater(int a[],int n)//time comp. O(n) ; space comp. O(n)
{
    int res=0;
    int lmax[n],rmax[n];

    lmax[0]=a[0];
    rmax[n-1]=a[n-1];

    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],a[i]);
    }

    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(a[i],rmax[i+1]);
    }

    for(int i=1;i<n-1;i++)
    {
        res=res+min(lmax[i],rmax[i])-a[i];
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

    cout<<trapRainWater(arr,n);
    return 0;
}