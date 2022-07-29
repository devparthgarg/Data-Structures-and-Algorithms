#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int stockBuy(int *a,int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            profit+=a[i]-a[i-1];
        }
    }

    return profit;
}

int main()
{
    int arr[]={1,5,3,8,12};
    int n=sizeof(arr)/sizeof(int);

    cout<<stockBuy(arr,n)<<endl;
    return 0;
}