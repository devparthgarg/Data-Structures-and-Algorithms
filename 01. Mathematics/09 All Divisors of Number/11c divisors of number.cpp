#include<bits/stdc++.h>
using namespace std;

//divisors in sorted order
void divisors(int n)//time comp. O(sqrt(n))
{
	//print divisors from 1 to sqrt(n) (excluded)
	int i = 1;
	for (; i * i < n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}

	//print divisors from sqrt(n) to n (included)
	for (; i >= 1; i--)
	{
		if (n % i == 0)
		{
			cout << (n / i) << " ";
		}
	}
}

int main()
{
	int n1 = 15, n2 = 100;

	divisors(n1);
	cout << endl;

	divisors(n2);
	cout << endl;

	return 0;
}