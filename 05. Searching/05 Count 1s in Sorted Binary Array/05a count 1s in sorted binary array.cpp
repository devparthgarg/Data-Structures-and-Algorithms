#include<bits/stdc++.h>
using namespace std;

//linear search
int count1s(int a[], int n) //time comp. O(n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int a[] = {0, 0, 0, 0, 1, 1, 1};
	int n = sizeof(a) / sizeof(int);

	cout << count1s(a, n);
	return 0;
}