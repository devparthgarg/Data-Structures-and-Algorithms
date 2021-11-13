#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)//time comp. O(sqrt(n))
{
	if (n <= 1)
	{
		return false;
	}

	if (n == 2 or n == 3)
	{
		return true;
	}

	if (n % 2 == 0 or n % 3 == 0)
	{
		return false;
	}

	for (int i = 5; i * i <= n; i = i + 6)
	{
		if (n % i == 0 or n % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}

void primeFactors(int n)//time comp. O(n*sqrt(n)*logn)
{
	for (int i = 2; i < n; i++)
	{
		if (isPrime(i))
		{
			int x = i;
			while (n % x == 0)
			{
				cout << i << " ";
				x = x * i;
			}
		}
	}
}

int main()
{
	int n1 = 12, n2 = 18;

	primeFactors(n1);
	cout << endl;

	primeFactors(n2);
	cout << endl;

	return 0;
}