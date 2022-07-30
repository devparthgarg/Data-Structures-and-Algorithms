#include<bits/stdc++.h>
using namespace std;

//time: O(n)
void split(vector<int> nums)
{
	/*
	trick:
	--> total sum = s
	--> if 3 subarrays with equal sum exits then 
	sum of each subarray = s/3
	--> we need to find indices i and j such that 
	sum upto i is s/3 and sum upto j is 2s/3
	*/

	int n=nums.size();

	int total_sum=0;
	for(auto x:nums)
	{
		total_sum+=x;
	}

	if(total_sum%3!=0)
	{
		cout<<"-1"<<endl;
		return;
	}

	int s1=total_sum/3;
	int s2=2*total_sum/3;
	int idx1=-1;
	int idx2=-1;
	int presum=0;

	for(int i=0;i<n-1;i++)
	{
		presum+=nums[i];

		if(presum==s1 and idx1==-1)
		{
			idx1=i;
		}
		else if(presum==s2 and idx2==-1)
		{
			idx2=i;
			break;
		}
	}

	if(idx1!=-1 and idx2!=-1)
	{
		cout<<idx1<<" and "<<idx2<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
}

int main()
{
	vector<int> nums={1,3,4,0,4};
	int n=nums.size();

	split(nums);
	return 0;
}