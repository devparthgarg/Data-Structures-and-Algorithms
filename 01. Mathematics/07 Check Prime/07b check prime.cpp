#include<bits/stdc++.h>
using namespace std;

//divisors always appear in pairs
bool isPrime(int n)//time comp. O(sqrt(n))
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i * i <= n; i++)
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