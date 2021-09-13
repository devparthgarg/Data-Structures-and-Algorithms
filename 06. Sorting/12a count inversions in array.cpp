#include<bits/stdc++.h>
using namespace std;

//Inversion : i<j and a[i]>a[j]

int countInversions(int a[], int n)//time comp. O(n^2) ; spoce comp. O(1)
{
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	int a[] = {2, 4, 1, 3, 5};
	int n = sizeof(a) / sizeof(int);

	cout << countInversions(a, n);
	return 0;
}