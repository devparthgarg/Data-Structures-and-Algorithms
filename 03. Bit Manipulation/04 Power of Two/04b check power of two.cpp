#include<bits/stdc++.h>
using namespace std;

//Brian Kerningham's Algorithm
bool isPower(int n)//time comp. O(1)
{
	if (n == 0)
	{
		return false;
	}

	return (n & (n - 1) == 0);
}

int main()
{
	int n = 5;//binary representation : 101

	cout << isPower(n) << endl;
	return 0;
}