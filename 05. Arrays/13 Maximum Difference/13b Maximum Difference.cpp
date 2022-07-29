#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int maxDiff(int *a,int n)
{
    int res=a[1]-a[0];
    int minVal=a[0];

    for(int i=1;i<n;i++)
    {
        res=max(res,a[i]-minVal);
        minVal=min(minVal,a[i]);
    }

    return res;
}

int main()
{
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<maxDiff(arr,n)<<endl;
    return 0;
}