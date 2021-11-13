#include<bits/stdc++.h>
using namespace std;

void rotateDspaces(int a[],int n,int d)//time comp. O(n) ; space comp. O(d)
{
    d=d%n;//to eliminate extra repeated iterations

    int temp[d];

    //copy d elements in a seprate array
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }

    //shift remaining elements left side
    for(int i=d;i<n;i++)
    {
        a[i-d]=a[i];
    } 

    //copy elements from temp to original array
    for(int i=0;i<d;i++)
    {
        a[n-d+i]=temp[i];
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