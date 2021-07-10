#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> v, int key)//time comp. O(n)
{
	int i = 0;
	int j = v[0].size() - 1;

	while (i<v.size() and j >= 0)
	{
		int x = v[i][j];

		if (x == key)
		{
			return true;
		}
		else if (x > key)
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
	vector<vector<int>> v = {
		{10, 20, 30, 40},
		{15, 25, 35, 45},
		{27, 29, 37, 48},
		{32, 33, 39, 50}
	};

	int key = 37;

	cout << search(v, key);
	return 0;
}