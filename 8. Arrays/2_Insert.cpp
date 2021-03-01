#include<bits/stdc++.h>
using namespace std;

int insert(int *arr,int n,int key,int pos)
{
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=key;
    n++;
    
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

    int key,pos;
    cin>>key>>pos;

    display(arr,n);
    n=insert(arr,n,key,pos);
    display(arr,n);
    return 0;
}