#include<bits/stdc++.h>
using namespace std;

int getSum(int a[],int n,int l,int r)//time comp. O(n*q)
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
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<getSum(a,n,l,r)<<endl;
    }

    return 0;
}