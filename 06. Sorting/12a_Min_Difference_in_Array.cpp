#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> v)//time comp. O(n^2) ; space comp. O(1)
{
	int n = v.size();
	int res = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			res = min(res, abs(v[i] - v[j]));
		}
	}

	return res;
}

int main()
{
	vector<int> v = {8};

	cout << minDiff(v);
	return 0;
}