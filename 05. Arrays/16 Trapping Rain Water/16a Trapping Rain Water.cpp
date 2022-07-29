#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
//space: O(1)
int trapRainWater(int *arr,int n)
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
    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(int);

    cout<<trapRainWater(arr,n)<<endl;
    return 0;
}