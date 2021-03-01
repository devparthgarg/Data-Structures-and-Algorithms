#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[],int n)//time comp. O(n)
{
    if(n<=1)
    {
        return true;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }

    return true;
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

    cout<<sorted(arr,n);
    return 0;
}