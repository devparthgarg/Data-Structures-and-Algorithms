#include<bits/stdc++.h>
using namespace std;

/*
Suitable for large values of n
*/

//Time: O(sqrt(n))
bool isPrime(int n)
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

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 or n % (i + 2) == 0)
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