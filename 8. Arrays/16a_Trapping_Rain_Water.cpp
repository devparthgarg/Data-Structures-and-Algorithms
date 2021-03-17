#include<bits/stdc++.h>
using namespace std;

int trapRainWater(int *arr,int n)//time comp. O(n^2)
{
    int res=0;
        
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,arr[j]);
        }
        
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,arr[j]);
        }
        
        res=res+min(rmax,lmax)-arr[i];
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