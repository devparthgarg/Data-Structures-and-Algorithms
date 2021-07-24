#include<bits/stdc++.h>
using namespace std;

//only applicable for sorted array
int binarySearch(int a[],int n,int key)//time comp. O(logn)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    return -1;
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

    cout<<binarySearch(a,n,key);
    return 0;
}