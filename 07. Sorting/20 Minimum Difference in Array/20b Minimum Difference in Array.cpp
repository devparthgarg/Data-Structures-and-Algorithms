#include<bits/stdc++.h>
using namespace std;

int minDif(vector<int>& nums)//time comp. O(n*logn) ; space comp. O(1)
{
	int n = nums.size();

	sort(nums.begin(), nums.end());

	int res = INT_MAX;

	for (int i = 0; i < n - 1; i++)
	{
		res = min(res, abs(nums[i] - nums[i + 1]));
	}

	return res;
}

int main()
{
	vector<int> nums{3, 10, 8, 6};

	cout << minDif(nums) << endl;
	return 0;
}