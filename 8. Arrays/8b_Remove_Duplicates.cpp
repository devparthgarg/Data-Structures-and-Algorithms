#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int a[],int n)//time comp. O(n*logn) ; space comp. O(1)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            a[res]=a[i];
            res++;
        }
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