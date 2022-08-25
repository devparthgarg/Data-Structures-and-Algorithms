#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
bool isTriplet(vector<int> nums)
{
	int n=nums.size();

	for(int i=0;i<n;i++)
	{
		nums[i]=nums[i]*nums[i];
	}

	sort(nums.begin(),nums.end());

	for(int i=n-1;i>=0;i--)
	{
		int l=0;
		int h=i-1;

		while(l<h)
		{
			int curr_sum=nums[l]+nums[h];

			if(curr_sum==nums[i])
			{
				return true;
			}
			else if(curr_sum>nums[i])
			{
				h--;
			}
			else
			{
				l++;
			}
		}
	}

	return false;
}

int main()
{
	vector<int> nums={3,1,4,6,5};

	cout<<isTriplet(nums)<<endl;
	return 0;
}