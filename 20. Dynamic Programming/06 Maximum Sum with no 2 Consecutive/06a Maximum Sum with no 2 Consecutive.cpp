#include<bits/stdc++.h>
using namespace std;

//Recursion
int maxSum(vector<int>& nums, int n)//time comp. O(2^n)
{
	if (n == 1)
	{
		return nums[0];
	}
	else if (n == 2)
	{
		return max(nums[0], nums[1]);
	}
	else
	{
		return max(maxSum(nums, n - 1), maxSum(nums, n - 2) + nums[n - 1]);
	}
}

int main()
{
	vector<int> nums{10, 5, 15, 20, 2, 30};
	int n = nums.size();

	cout << maxSum(nums, n) << endl;
	return 0;
}