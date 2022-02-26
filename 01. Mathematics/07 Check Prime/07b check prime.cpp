#include<bits/stdc++.h>
using namespace std;

/*
Divisors always appear in pairs.
Eg: divisors of 12: 1,2,3,4,6,12
Pairs: (1,12),(2,6),(3,4)
*/

//Time: O(sqrt(n))
bool isPrime(int n)
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