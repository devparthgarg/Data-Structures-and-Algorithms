#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

void rotateDspaces(int a[],int n,int d)//time comp. O(n) ; space comp. O(1)
{
    d=d%n;//to eleminate repeated iterations

    //reverse first d elements 
    reverse(a,0,d-1);

    //reverse remaining n-d elements
    reverse(a,d,n-1);

    //reverse whole array
    reverse(a,0,n-1); 
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