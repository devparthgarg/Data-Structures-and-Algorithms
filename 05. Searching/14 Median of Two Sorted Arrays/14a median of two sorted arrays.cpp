#include<bits/stdc++.h>
using namespace std;

double median(vector<int> v1, vector<int> v2)//time comp. O((m+n)*log(m+n)) ; space comp. O(m+n)
{
	vector<int> v;

	for (auto x : v1)
	{
		v.push_back(x);
	}

	for (auto x : v2)
	{
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int sz = v.size();

	if (sz % 2 == 0)
	{
		int idx1 = sz / 2;
		int idx2 = idx1 - 1;

		return ((v[idx1] + v[idx2]) / 2.0);
	}
	else
	{
		return v[sz / 2];
	}
}

int main()
{
	vector<int> v1{10, 20, 30, 40, 50};
	vector<int> v2{5, 15, 25, 35, 45};

	int m = v1.size();
	int n = v2.size();

	cout << median(v1, v2)<<endl;
	return 0;
}