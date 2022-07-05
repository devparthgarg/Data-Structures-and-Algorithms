#include<bits/stdc++.h>
using namespace std;

int maxItems(int a[], int n, int sum)//time comp. O(n*logn) ; space comp. O(1)
{
	int cnt = 0;

	sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		if (sum >= a[i])
		{
			sum = sum - a[i];
			cnt++;
		}
		else
		{
			break;
		}
	}

	return cnt;
}

int main()
{
	int a[] = {1, 12, 5, 111, 200};
	int n = sizeof(a) / sizeof(int);
	int sum = 10;

	cout << maxItems(a, n, sum);
	return 0;
}