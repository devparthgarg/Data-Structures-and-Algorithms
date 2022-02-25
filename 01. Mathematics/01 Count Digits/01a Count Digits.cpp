#include<bits/stdc++.h>
using namespace std;

//Time: O(logn)
int countDigits(int n)
{
	int cnt = 0;

	while (n)
	{
		n = n / 10;
		cnt++;
	}

	return cnt;
}

int main()
{
	int n = 12345;

	cout << countDigits(n) << endl;
	return 0;
}