#include<bits/stdc++.h>
using namespace std;

//Sieve of Erathosthenes
//shorter implementation
void sieve(int n)//time comp. O(n*log(log(n)))
{
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			cout << i << " ";
			for (int j = i * i; j <= n; j = j + i)
			{
				isPrime[j] = false;
			}
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