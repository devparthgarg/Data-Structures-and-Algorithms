#include<bits/stdc++.h>
using namespace std;

//time: O(n*q) q: number of queries
int getSum(int a[],int n,int l,int r)
{
    int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum=sum+a[i];
    }

    return sum;
}

int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(int);

    cout<<getSum(arr,n,0,2)<<endl;
    cout<<getSum(arr,n,1,3)<<endl;
    cout<<getSum(arr,n,2,6)<<endl;

    return 0;
}