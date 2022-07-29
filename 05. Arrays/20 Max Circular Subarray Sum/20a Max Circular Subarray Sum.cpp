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

//time: O(n*n)
int maxCircularSubArraySum(int a[],int n)
{
    int res=a[0];
    for(int i=0;i<n;i++)
    {
        int curr_sum=a[i];
        int curr_max=a[i];
        for(int j=1;j<n;j++)
        {
            int idx=(i+j)%n;
            curr_sum+=a[idx];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
    }

    return res;
}

int main()
{
    int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(int);

    cout<<maxCircularSubArraySum(arr,n)<<endl;
    return 0;
}