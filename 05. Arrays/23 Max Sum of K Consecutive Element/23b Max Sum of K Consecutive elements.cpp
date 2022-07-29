#include<bits/stdc++.h>
using namespace std;

//Sliding Window: sliding a window of size k
//time: O(n)
int maxKSum(vector<int> nums,int k)
{
    int n=nums.size();
    int window_sum=0;
    int max_sum=0;

    for(int i=0;i<k;i++)
    {
        window_sum+=nums[i];
    }

    max_sum=window_sum;

    int i=0;
    int j=k;

    while(j<n)
    {
        window_sum=window_sum-nums[i]+nums[j];
        max_sum=max(max_sum,window_sum);
        i++;
        j++;
    }

    return max_sum;
}

int main()
{
    vector<int> nums={1,8,30,-5,20,7};
    int k=3;

    cout<<maxKSum(nums,k)<<endl;
    return 0;
}