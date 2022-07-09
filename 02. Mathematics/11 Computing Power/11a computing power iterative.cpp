#include<bits/stdc++.h>
using namespace std;

//not suitable for large values of x and n
int power(int x, int n)//time comp. O(n)
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res = res * x;
	}

	return res;
}

int main()
{
	int x = 2, n = 3;

	cout << power(x, n) << endl;
	return 0;
}