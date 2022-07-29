#include<bits/stdc++.h>
using namespace std;

//time: O(n) 
//space: O(n)
int trapRainWater(int a[],int n)
{
    int res=0;
    int lmax[n],rmax[n];

    lmax[0]=0;
    rmax[n-1]=0;

    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],a[i-1]);
    }

    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(a[i+1],rmax[i+1]);
    }

    for(int i=1;i<n-1;i++)
    {
        int h=min(lmax[i],rmax[i]);
        if(h>a[i])
        {
            res+=h-a[i];
        }
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