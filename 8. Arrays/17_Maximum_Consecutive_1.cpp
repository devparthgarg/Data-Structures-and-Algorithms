#include<bits/stdc++.h>
using namespace std;

int maxConsecutive1(int *a,int n)//time comp. O(n)
{
    int cnt=0;
    int max1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        if(cnt>max1)
        {
            max1=cnt;
        }
    }

    return max1;
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

    cout<<maxConsecutive1(arr,n)<<endl;
    return 0;
}