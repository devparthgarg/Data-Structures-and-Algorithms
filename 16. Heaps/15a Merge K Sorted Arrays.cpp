#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKSorted(vector<vector<int>> v)//time comp. O(n*k*log(nk)) ; space comp. O(n*k)
{
	vector<int> res;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			res.push_back(v[i][j]);
		}
	}

	sort(res.begin(), res.end());
	return res;
}

int main()
{
	vector<vector<int>> v;

	v.push_back({10, 20, 30});
	v.push_back({5, 15});
	v.push_back({1, 9, 11, 18});

	vector<int> res = mergeKSorted(v);

	for (auto x : res)
	{
		cout << x << " ";
	}

	return 0;
}