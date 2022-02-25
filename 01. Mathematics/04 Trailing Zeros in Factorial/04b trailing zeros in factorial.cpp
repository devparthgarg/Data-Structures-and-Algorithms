#include<bits/stdc++.h>
using namespace std;

//Time: O(logn)
int trailingZeros(int n)
{
	int cnt = 0;

	//count number of occurences of 5
	int p = 5;

	while (p <= n)
	{
		cnt += n / p;
		p *= 5;
	}

	return cnt;
}

int main()
{
	int n = 10;

	cout << trailingZeros(n) << endl;
	return 0;
}