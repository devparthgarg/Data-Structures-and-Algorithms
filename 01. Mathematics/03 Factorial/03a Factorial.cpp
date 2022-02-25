#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
int factorial(int n)
{
	int res = 1;

	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}

	return res;
}

int main()
{
	int n = 5;

	cout << factorial(n) << endl;
	return 0;
}