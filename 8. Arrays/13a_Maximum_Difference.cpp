#include<bits/stdc++.h>
using namespace std;

int maxDiff(int *a,int n)
{
    int max_diff=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int e1=a[i];
        int curr_diff=0;
        for(int j=i+1;j<n;j++)
        {
            curr_diff=a[j]-a[i];
            if(max_diff<curr_diff)
            {
                max_diff=curr_diff;
            }
        }
    }

    return max_diff;
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

    cout<<maxDiff(a,n);
    return 0;
}