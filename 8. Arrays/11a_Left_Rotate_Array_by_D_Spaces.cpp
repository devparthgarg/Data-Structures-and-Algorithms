#include<bits/stdc++.h>
using namespace std;

void rotateDspaces(int a[],int n,int d)//time comp. O(n^2)
{
    for(int k=0;k<d;k++)
    {
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        a[n-1]=temp;
    }
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
    int d;
    cin>>d;

    display(arr,n);
    rotateDspaces(arr,n,d);
    display(arr,n);

    return 0;
}