#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n)//time comp. O(sqrt(n)*logn)
{
	if (n <= 1)
	{
		return ;
	}

	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
	}

	if (n > 1)
	{
		cout << n;
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