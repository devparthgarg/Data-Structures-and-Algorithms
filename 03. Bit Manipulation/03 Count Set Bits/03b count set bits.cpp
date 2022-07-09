#include<bits/stdc++.h>
using namespace std;

//Brian Kerningham's Algorithm
//optimised for large values of n

//Time: O(k) ; k:total set bits
int setBits(int n)
{
	int cnt = 0;

	while (n)
	{
		n = n & (n - 1);
		cout << n << " ";
		cnt++;
	}

	return cnt;
}

int main()
{
	//5 binary is: 101
	int n = 7;
	setBits(n);
	// cout << setBits(n) << endl;
	return 0;
}