#include<bits/stdc++.h>
using namespace std;

bool isPower(int n)//time comp. O(1)
{
	if (n == 0)
	{
		return false;
	}

	return (n & (n - 1) == 0); //brian kerningham algorithm
}

int main()
{
	int n = 5;//binary representation : 101

	cout << isPower(n);
	return 0;
}