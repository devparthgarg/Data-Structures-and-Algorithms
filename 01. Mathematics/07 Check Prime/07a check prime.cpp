#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)//time comp. O(n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n = 13;

	cout << isPrime(n) << endl;
	return 0;
}