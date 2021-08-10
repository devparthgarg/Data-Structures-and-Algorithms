#include<bits/stdc++.h>
using namespace std;

/*
print elements occuring more than
(n/k) times in array
*/

void nkOcc(vector<int> v, int k)//time comp. O(n) ; space comp. O(n)
{
	int n = v.size();
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++)
	{
		mp[v[i]]++;
	}

	for (auto x : mp)
	{
		if (x.second > (n / k))
		{
			cout << x.first << " ";
		}
	}
}

int main()
{
	vector<int> v = {10, 10, 20, 30, 20, 10, 10};
	int k = 4;

	nkOcc(v, k);
	return 0;
}