#include<bits/stdc++.h>
using namespace std;

//Kadane's Algo
//time: O(n)
int maxSubarraySum(int nums[],int n) 
{
    int curr_sum=0;
    int max_sum=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        curr_sum+=nums[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    
    return max_sum;
}

int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(int);

    cout << maxSubarraySum(arr,n)<<endl;
    return 0;
}
