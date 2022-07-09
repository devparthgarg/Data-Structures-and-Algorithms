#include<bits/stdc++.h>
using namespace std;

//Time: O(n!)
//Space: O(n)
int lexiographicRank(string s)
{
	string sorted_s = s;
	sort(sorted_s.begin(), sorted_s.end());

	int rank = 0;
	while (true)
	{
		rank++;
		if (s == sorted_s)
		{
			return rank;
		}

		next_permutation(sorted_s.begin(), sorted_s.end());
	}

	return 0;
}

int main()
{
	string s = "STRING";

	cout << lexiographicRank(s) << endl;
	return 0;
}