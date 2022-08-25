#include<bits/stdc++.h>
using namespace std;

/*
in an sorted array check if a
pair exists with given sum
*/

//two pointer approach - only applicable on sorted arrays
bool twoSum(int a[], int n, int sum)//time comp. O(n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int curr_sum = a[i] + a[j];
		if (curr_sum == sum)
		{
			return true;
		}
		else if (curr_sum > sum)
		{
			j--;
		}
		else
		{
			i++;
		}
	}

	return false;
}

int main()
{
	int a[] = {2, 3, 5, 8, 9, 10, 11};
	int n = sizeof(a) / sizeof(int);
	int sum = 17;

	cout << twoSum(a, n, sum);
	return 0;
}