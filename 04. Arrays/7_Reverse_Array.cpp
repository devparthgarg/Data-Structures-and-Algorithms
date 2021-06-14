#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int n)//time comp. O(n)
{
    if(n<=1)
    {
        return ;
    }

    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
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

    display(arr,n);
    reverse(arr,n);
    display(arr,n);
    return 0;
}