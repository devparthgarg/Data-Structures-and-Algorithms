#include<bits/stdc++.h>
using namespace std;

int intersection(int a[], int b[], int m, int n) //time comp. O(n) ; space comp. O(n)
{
	int cnt = 0;
	unordered_set<int> s(a, a + m);

	for (int i = 0; i < n; i++)
	{
		if (s.find(b[i]) != s.end())
		{
			cnt++;
			s.erase(b[i]);//important step
		}
	}

	return cnt;
}

int main()
{
	int a[] = {10, 15, 20, 5, 30};
	int b[] = {30, 5, 30, 80};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	cout << intersection(a, b, m, n);
	return 0;
}