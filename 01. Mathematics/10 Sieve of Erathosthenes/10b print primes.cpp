#include<bits/stdc++.h>
using namespace std;

//Sieve of Erathosthenes
void sieve(int n)//time comp. O(n*logn)
{
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = 2 * i; j <= n; j = j + i)
			{
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int n1 = 10, n2 = 100;

	sieve(n1);
	cout << endl;

	sieve(n2);
	cout << endl;

	return 0;
}