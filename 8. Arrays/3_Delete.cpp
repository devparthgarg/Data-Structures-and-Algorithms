#include<bits/stdc++.h>
using namespace std;

int del(int *arr,int n,int key)//time comp. O(n)
{
    int idx,i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            idx=i;
            break;
        }
    }
    if(i==n)
    {
        return n;
    }

    for(int i=idx;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    return n;
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return ;
}

int main()
{
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    display(arr,n);
    n=del(arr,n,key);
    display(arr,n);
    return 0;
}