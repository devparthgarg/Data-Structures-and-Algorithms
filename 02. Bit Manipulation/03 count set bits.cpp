#include<bits/stdc++.h>
using namespace std;

int setBits(int n)//time comp. O(logn)
{
	int cnt = 0;

	while (n)
	{
		if (n & 1)
		{
			cnt++;
		}
		n = n >> 1;
	}

	return cnt;
}

int main()
{
	int n = 5;//binary representation : 101

	cout << setBits(n);
	return 0;
}