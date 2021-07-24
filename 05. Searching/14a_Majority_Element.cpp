#include<bits/stdc++.h>
using namespace std;

/*Majority element :
element which appears more than n/2 times*/
int majority(vector<int> v)//time comp. O(n^2) ; space comp. O(1)
{
	float n = v.size() / 2.0;

	for (int i = 0; i < v.size(); i++)
	{
		int cnt = 1;
		int e = v[i];
		for (int j = i + 1; j < v.size(); j++)
		{
			if (e == v[j])
			{
				cnt++;
			}
		}
		if (cnt > n)
		{
			return e;
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