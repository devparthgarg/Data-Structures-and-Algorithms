#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
int maxDiff(int *a,int n)
{
    int max_diff=INT_MIN;
    for(int i=0;i<n;i++)
    {
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
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<maxDiff(arr,n)<<endl;
    return 0;
}
