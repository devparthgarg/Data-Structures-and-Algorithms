#include<bits/stdc++.h>
using namespace std;

int stockBuy(int *a,int n)//time comp. O(n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            profit=profit+a[i]-a[i-1];
        }
    }

    return profit;
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

    cout<<stockBuy(arr,n)<<endl;
    return 0;
}