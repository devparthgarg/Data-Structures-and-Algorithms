#include<bits/stdc++.h>
using namespace std;

int sqRoot(int n)//time comp. O(sqrt(n))
{
	int i = 1;

	while (i * i <= n)
	{
		i++;
	}

	return (i - 1);
}

int main()
{
	int n = 225;

	cout << sqRoot(n);
	return 0;
}