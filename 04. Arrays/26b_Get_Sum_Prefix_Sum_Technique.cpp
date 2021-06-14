#include<bits/stdc++.h>
using namespace std;

//pre-computing prefix array sum
int prefix[1000]{0};
void prefixSum(int a[],int n)
{
    prefix[0]=a[0];

    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
}

int getSum(int l,int r)//time comp. O(n)
{
    if(l==0)
    {
        return prefix[r];
    }

    return (prefix[r]-prefix[l-1]);
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

    prefixSum(a,n);

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<getSum(l,r)<<endl;
    }

    return 0;
}