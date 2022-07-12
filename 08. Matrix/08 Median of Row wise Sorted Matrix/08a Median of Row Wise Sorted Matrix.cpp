#include<bits/stdc++.h>
using namespace std;

/*
Assumptions :
1.odd sized arrays
2.all distinct elements
*/
int median(vector<vector<int>>& v)//time comp. O(r*c*log(r*c))
{
	vector<int> arr;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			arr.push_back(v[i][j]);
		}
	}

	sort(arr.begin(), arr.end());

	return arr[arr.size() / 2];
}

int main()
{
	vector<vector<int>> v = {
		{2, 4, 6, 8, 10},
		{1, 3, 5, 7, 9},
		{100, 200, 400, 500, 800}
	};

	cout << median(v);
	return 0;
}