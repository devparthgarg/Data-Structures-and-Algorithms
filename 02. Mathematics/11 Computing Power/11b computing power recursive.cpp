#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)//time comp. O(logn) ; space comp. O(logn)
{
	if (n == 0)
	{
		return 1;
	}

	int temp = power(x, n / 2);
	temp = temp * temp;

	if (n % 2 == 0)
	{
		return temp;
	}
	else
	{
		return temp * x;
	}
}

int main()
{
	int x = 2, n = 3;

	cout << power(x, n) << endl;
	return 0;
}