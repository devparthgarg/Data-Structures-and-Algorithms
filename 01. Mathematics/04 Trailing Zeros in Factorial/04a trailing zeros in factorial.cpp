#include<bits/stdc++.h>
using namespace std;

/*
Trailing Zeros in Factorial:
number of zeros present in
factorial of a number.
*/

int factorial(int n)
{
	int res = 1;

	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}

	return res;
}

//Time: O(n)
int trailingZeros(int n)
{
	//calculate factorial
	int fact = factorial(n);

	//count number of zeros
	int cnt = 0;

	while (fact)
	{
		if (fact % 10 == 0)
		{
			cnt++;
			fact = fact / 10;
		}
		else
		{
			break;
		}
	}

	return cnt;
}

int main()
{
	int n = 10;

	cout << trailingZeros(n) << endl;
	return 0;
}