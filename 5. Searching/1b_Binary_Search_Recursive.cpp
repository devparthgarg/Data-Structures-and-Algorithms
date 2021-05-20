#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int low,int high,int key)//time comp. O(logn) ; space comp. O(logn)
{
    //base case
    if(low>high)
    {
        return -1;
    }

    //recursive case
    int mid=(low+high)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]>key)
    {
        return binarySearch(a,low,mid-1,key);
    }
    else
    {
        return binarySearch(a,mid+1,high,key);
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

    cout<<binarySearch(a,0,n-1,key);
    return 0;
}