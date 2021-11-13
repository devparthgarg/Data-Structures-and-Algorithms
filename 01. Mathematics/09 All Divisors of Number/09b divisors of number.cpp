#include<bits/stdc++.h>
using namespace std;

//divisors not in sorted order
void divisors(int n)//time comp. O(sqrt(n))
{
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			if (i != n / i)
			{
				cout << n / i << " ";
			}
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