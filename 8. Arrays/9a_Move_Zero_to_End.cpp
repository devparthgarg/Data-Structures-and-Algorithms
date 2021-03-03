#include<bits/stdc++.h>
using namespace std;

void moveZeros(int a[],int n)//time comp. O(n^2)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]!=0)
                {
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
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
    moveZeros(arr,n);
    display(arr,n);

    return 0;
}
