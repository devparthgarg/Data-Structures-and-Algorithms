#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int count1s(vector<int> nums)
{
	int n=nums.size();
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (nums[i] == 1)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	vector<int> nums={0, 0, 0, 0, 1, 1, 1};

	cout << count1s(a, n)<<endl;
	return 0;
}