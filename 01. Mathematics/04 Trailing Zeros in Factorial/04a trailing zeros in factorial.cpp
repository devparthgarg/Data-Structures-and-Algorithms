#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = res * i;
	}

	return res;
}

//not suitable for large factorials
int trailingZeros(int n)//time comp. O(n)
{
	//1.calculate factorial
	int fact = factorial(n);

	//2.count zeroes in factorial
	int cnt = 0;
	while (fact % 10 == 0)
	{
		fact = fact / 10;
		cnt++;
	}

	return cnt;
}

int main()
{
	int n = 10;

	cout << trailingZeros(n) << endl;
	return 0;
}