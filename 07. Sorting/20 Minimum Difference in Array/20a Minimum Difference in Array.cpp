#include<bits/stdc++.h>
using namespace std;

int minDif(vector<int>& nums)//time comp. O(n^2) ; space comp. O(1)
{
	int n = nums.size();
	int res = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			res = min(res, abs(nums[i] - nums[j]));
		}
	}

	return res;
}

int main()
{
	vector<int> nums{3, 10, 8, 6};

	cout << minDif(nums) << endl;
	return 0;
}