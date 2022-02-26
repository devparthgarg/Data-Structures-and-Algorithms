#include<bits/stdc++.h>
using namespace std;

/*
All numbers repeat except one number.
Find that number.
*/

//Time: O(n)
int oneOddOccuring(vector<int> nums)
{
	int n = nums.size();

	//xor variable
	int x = 0;

	//take xor of whole array with x
	for (int i = 0; i < n; i++)
	{
		x = x ^ nums[i];
	}

	return x;
}

int main()
{
	vector<int> nums = {1, 9, 2, 8, 3, 1, 9, 2, 8};

	cout << oneOddOccuring(nums) << endl;
	return 0;
}