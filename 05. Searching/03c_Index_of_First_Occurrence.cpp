#include<bits/stdc++.h>
using namespace std;

//iterative method
int firstOcc(int a[],int n,int key)//time comp. O(logn)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]>key)
        {
            high=mid-1;
        }   
        else if(a[mid]<key)
        {
            low=mid+1;
        }     
        else
        {
            if(mid==0 or a[mid-1]!=a[mid])
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
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

    cout<<firstOcc(a,n,key);
    return 0;
}