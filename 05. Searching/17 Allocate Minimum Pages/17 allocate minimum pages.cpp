#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &nums,int pages,int S)
{
	int cnt=0;
	int sumAllocated=0;

	for(auto x:nums)
	{
		if(sumAllocated+x>pages)
		{
			cnt++;
			sumAllocated=x;
			if(sumAllocated>pages)
			{
				return false;
			}
		}
		else
		{
			sumAllocated+=x;
		}
	}

	if(cnt<S)
	{
		return true;
	}

	return false;
}

int allocatePages(vector<int>& nums,int S)
{
	int n=nums.size();

	//books should be greater than students
	if(S>n)
	{
		return -1;
	}

	//find search space
	int low=INT_MAX;
	int high=0;

	for(auto x:nums)
	{
		low=min(low,x);
		high+=x;
	}

	//apply binary search
	while(low<=high)
	{
		int mid=(low+high)/2;

		if(isPossible(nums,mid,S))
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}

	return low;
}

int main()
{
	vector<int> nums={12,34,67,90};
	int k = 2;

	cout << allocatePages(nums,k)<<endl;
	return 0;
}