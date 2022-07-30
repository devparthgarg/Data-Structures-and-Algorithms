#include<bits/stdc++.h>
using namespace std;

//pre-computing prefix array sum
int prefix[1000] {0};
void prefixSum(int a[], int n)
{
    prefix[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
}

//time: O(1) (only time is taken by pre computation which is O(n))
int getSum(int l, int r)
{
    if (l == 0)
    {
        return prefix[r];
    }

    return (prefix[r] - prefix[l - 1]);
}

int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(int);

    prefixSum(arr,n);

    cout<<getSum(0,2)<<endl;
    cout<<getSum(1,3)<<endl;
    cout<<getSum(2,6)<<endl;

    return 0;
}