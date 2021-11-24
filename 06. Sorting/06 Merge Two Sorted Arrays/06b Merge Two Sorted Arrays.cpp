#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n) //time comp. O(m+n) ; space comp. O(1)
{
	int i = 0;
	int j = 0;

	while (i < m and j < n)
	{
		if (a[i] <= b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else
		{
			cout << b[j] << " ";
			j++;
		}
	}

	//print remaining of array a and b
	while (i < m)
	{
		cout << a[i] << " ";
		i++;
	}

	while (i < n)
	{
		cout << a[j] << " ";
		j++;
	}
}

int main()
{
	int a1[] = {1, 3, 5, 7, 9};
	int a2[] = {2, 4, 6, 8};

	int n1 = sizeof(a1) / sizeof(int);
	int n2 = sizeof(a2) / sizeof(int);

	merge(a1, a2, n1, n2);
	return 0;
}