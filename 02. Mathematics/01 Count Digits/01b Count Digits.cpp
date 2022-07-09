#include<bits/stdc++.h>
using namespace std;

//Time: O(logn)
//Space: O(logn)
int countDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}

	return (1 + countDigits(n / 10));
}

int main()
{
	int n = 12345;

	cout << countDigits(n) << endl;
	return 0;
}