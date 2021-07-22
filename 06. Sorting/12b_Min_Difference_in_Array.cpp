#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> v)//time comp. O(n*logn) ; space comp. O(1)
{
	int n = v.size();
	int res = INT_MAX;

	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; i++)
	{
		res = min(res, abs(v[i] - v[i + 1]));
	}

	return res;
}

int main()
{
	vector<int> v = {10, 3, 20, 12};

	cout << minDiff(v);
	return 0;
}