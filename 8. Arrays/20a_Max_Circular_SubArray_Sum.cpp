#include<bits/stdc++.h>
using namespace std;

/*
Concept of circular sub array :

let a[]={10,5,-5}

then sub arrays are : 
{10},{5},{-5},{10,5},{5,-5},{10,5,-5}

circular subarrays are :
{-5,10},{-5,10,5},{5,-5,10}
*/

int maxCircularSubArraySum(int a[],int n)//time comp. O(n^2)
{
    int res=a[0];

    for(int i=0;i<n;i++)
    {
        int curr_max=a[i];
        int curr_sum=a[i];

        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum+=a[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
    }

    return res;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<maxCircularSubArraySum(a,n);
    return 0;
}