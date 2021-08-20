#include<bits/stdc++.h>
using namespace std;

void divisors(int n)//time comp. O(n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
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