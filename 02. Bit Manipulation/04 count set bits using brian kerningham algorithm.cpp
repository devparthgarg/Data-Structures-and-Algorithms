#include<bits/stdc++.h>
using namespace std;

//optimised for large values of n
int setBits(int n)//time comp. O(total set bits)
{
	int cnt = 0;

	while (n)
	{
		n = n & (n - 1);
		cnt++;
	}

	return cnt;
}

int main()
{
	int n = 5;//binary representation : 101

	cout << setBits(n);
	return 0;
}