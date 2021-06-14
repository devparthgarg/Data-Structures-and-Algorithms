#include<bits/stdc++.h>
using namespace std;

//recursive method
int firstOcc(int a[],int l,int h,int key)//time comp. O(logn) ; space comp. O(logn)
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
        return firstOcc(a,l,mid-1,key);
    }
    else if(a[mid]<key)
    {
        return firstOcc(a,mid+1,h,key);
    }
    else
    {
        if(mid==0 or a[mid-1]!=a[mid])
        {
            return mid;
        }
        else
        {
            return firstOcc(a,l,mid-1,key);
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

    cout<<firstOcc(a,0,n-1,key);
    return 0;
}