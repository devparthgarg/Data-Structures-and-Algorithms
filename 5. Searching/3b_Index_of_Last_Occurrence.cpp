#include<bits/stdc++.h>
using namespace std;

//recursive method
int lastOcc(int a[],int l,int h,int key,int n)//time comp. O(logn) ; space comp. O(logn)
{
    //base case
    if(l>h)
    {
        return -1;
    }

    //recursive case
    int mid=(l+h)/2;
    if(a[mid]>key)
    {
        return lastOcc(a,l,mid-1,key,n);
    }
    else if(a[mid]<key)
    {
        return lastOcc(a,mid+1,h,key,n);
    }
    else
    {
        if(mid==(n-1) or a[mid+1]!=a[mid])
        {
            return mid;
        }
        else
        {
            return lastOcc(a,mid+1,h,key,n);
        }
    }
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

    int key;
    cin>>key;

    cout<<lastOcc(a,0,n-1,key,n);
    return 0;
}