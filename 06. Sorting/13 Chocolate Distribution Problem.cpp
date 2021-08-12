#include<bits/stdc++.h>
using namespace std;

/*
Given an array A[ ] of positive integers of size N, where each value represents the
number of chocolates in a packet. Each packet can have a variable number of chocolates.
There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number
of chocolates given to a student is minimum.
*/

int chocolateDistribution(int a[], int n, int m) //time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);

	if (m > n)
	{
		return -1;
	}

	int res = INT_MAX;
	for (int i = 0; i + m - 1 < n; i++)
	{
		res = min(res, a[i + m - 1] - a[i]);
	}

	return res;
}

int main()
{
	int a[] = {7, 3, 2, 4, 9, 12, 56};
	int n = sizeof(a) / sizeof(int);
	int m = 3;

	cout << chocolateDistribution(a, n, m);
	return 0;
}