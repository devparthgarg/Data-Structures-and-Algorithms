#include<bits/stdc++.h>
using namespace std;

int unique(int *a,int n)//time comp. O(n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }

    return res;
}

int main()
{
    int arr[]={4,3,4,4,4,5,5};
    int n=sizeof(arr)/sizeof(int);

    cout<<unique(arr,n);
    return 0;
}