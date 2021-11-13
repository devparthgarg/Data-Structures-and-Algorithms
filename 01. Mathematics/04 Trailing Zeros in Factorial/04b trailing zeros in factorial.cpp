#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int n)//time comp. O(logn)
{
	int cnt = 0;
	int p = 5;

	while (n / p)
	{
		cnt += n / p;
		p = p * 5;
	}

	return cnt;
}

int main()
{
	int n = 100;

	cout << trailingZeros(n) << endl;
	return 0;
}