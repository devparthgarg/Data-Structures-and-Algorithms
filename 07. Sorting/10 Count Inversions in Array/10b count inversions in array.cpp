#include<bits/stdc++.h>
using namespace std;

int countAndMerge(int a[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int left[n1];
	for (int i = 0; i < n1; i++)
	{
		left[i] = a[i + l];
	}

	int right[n2];
	for (int i = 0; i < n2; i++)
	{
		right[i] = a[i + 1 + m];
	}

	int i = 0, j = 0, k = l, res = 0;

	while (i < n1 and j < n2)
	{
		if (left[i] <= right[j])
		{
			a[k] = left[i];
			k++;
			i++;
		}
		else
		{
			a[k] = right[j];
			k++;
			j++;
			res += n1 - i;
		}
	}

	while (i < n1)
	{
		a[k] = left[i];
		k++;
		i++;
	}

	while (j < n2)
	{
		a[k] = right[j];
		k++;
		j++;
	}

	return res;
}

int countInversions(int a[], int l, int r) //time comp. O(n*logn) ; spoce comp. O(1)
{
	int res = 0;

	if (l < r)
	{
		int mid = (l + r) / 2;
		res += countInversions(a, l, mid);
		res += countInversions(a, mid + 1, r);
		res += countAndMerge(a, l, mid, r);
	}

	return res;
}

int main()
{
	int a[] = {2, 4, 1, 3, 5};
	int n = sizeof(a) / sizeof(int);

	cout << countInversions(a, 0, n - 1);
	return 0;
}