#include<bits/stdc++.h>
using namespace std;

/*
Prime Number:
numbers that have only 2
factors: 1 and themselves.
Eg: 2,3,5,7,11
*/

//Time: O(n)
bool isPrime(int n)
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