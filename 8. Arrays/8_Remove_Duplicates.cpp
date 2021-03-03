#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int a[],int n)//time comp. O(nlogn) (because we are sorting the array) , space comp. O(n)
{
    int temp[n];
    temp[0]=a[0];
    int res=1;

    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=a[i])
        {
            temp[res]=a[i];
            res++;
        }
    }

    for(int i=0;i<res;i++)
    {
        a[i]=temp[i];
    }

    return res;
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    sort(arr,arr+n);

    display(arr,n);
    n=removeDuplicate(arr,n);
    display(arr,n);

    return 0;
}