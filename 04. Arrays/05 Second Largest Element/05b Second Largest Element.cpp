#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)//time comp. O(n) - one traversal only
{
    int greatest,secondGreatest;
    greatest=secondGreatest=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>greatest)
        {
            secondGreatest=greatest;
            greatest=arr[i];
        }        
        if(arr[i]<greatest and arr[i]>secondGreatest)
        {
            secondGreatest=arr[i];
        }
    }

    return secondGreatest;
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

    cout<<secondLargest(arr,n);
    return 0;
}