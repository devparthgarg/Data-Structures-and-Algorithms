#include<bits/stdc++.h>
using namespace std;

/*Majority element :
element which appears more than n/2 times*/
int majority(vector<int> v)//time comp. O(n) ; space comp. O(n)
{
	unordered_map<int, int> mp;

	for (int i = 0; i < v.size(); i++)
	{
		mp[v[i]]++;
	}

	float res = v.size() / 2.0;

	for (int i = 0; i < v.size(); i++)
	{
		if (mp[v[i]] > res)
		{
			return v[i];
		}
	}

	return -1;
}

int main()
{
	vector<int> v = {8, 3, 4, 8, 8};

	cout << majority(v);
	return 0;
}