#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int *arr,int l,int h,int key)//time comp. O(nlogn) ; space comp. O(logn)
{
    if(l>h)
    {
        return -1;
    }

    int mid=(l+h)/2;

    if(arr[mid]==key)
    {
        return 1;
    }
    else if(arr[mid]>key)
    {
        return binarySearchRecursive(arr,l,mid-1,key);
    }
    else
    {
        return binarySearchRecursive(arr,mid+1,h,key);
    }
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
    
    int key;
    cin>>key;

    cout<<binarySearchRecursive(arr,0,n-1,key);
    return 0;
}
