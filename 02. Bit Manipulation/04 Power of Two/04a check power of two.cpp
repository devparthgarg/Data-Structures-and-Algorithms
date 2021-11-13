#include<bits/stdc++.h>
using namespace std;

int setBits(int n)
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

bool isPower(int n)//time comp. O(logn)
{
	//if total set bit count is 1 then power of 2
	int total_set_bit = setBits(n);

	return total_set_bit == 1 ? 1 : 0;
}

int main()
{
	int n = 5;//binary representation : 101

	cout << isPower(n) << endl;
	return 0;
}