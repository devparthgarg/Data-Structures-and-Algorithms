#include<bits/stdc++.h>
using namespace std;

//Time: O(logn)
int setBits(int n)
{
	int cnt = 0;

	while (n)
	{
		cnt += n & 1;
		n = n >> 1;
	}

	return cnt;
}

int main()
{
	//5 binary is: 101
	int n = 5;

	cout << setBits(n) << endl;
	return 0;
}