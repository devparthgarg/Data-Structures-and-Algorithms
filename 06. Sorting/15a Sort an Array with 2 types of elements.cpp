#include<bits/stdc++.h>
using namespace std;

/*
Forms of this question:
1.seagregate positive and negative
2.seagregate even and odd
3.sort a binary array
*/

//Naive Method (seperate even and odd elements)
void evenOdd(int a[], int n)//time comp. O(n) ; space comp. O(n)
{
	int temp[n];

	int i = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 == 0)
		{
			temp[i] = a[j];
			i++;
		}
	}

	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 != 0)
		{
			temp[i] = a[j];
			i++;
		}
	}

	for (int j = 0; j < n; j++)
	{
		a[j] = temp[j];
	}
}

void display(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = {10, 11, 13, 14, 15};
	int n = sizeof(a) / sizeof(int);

	evenOdd(a, n);
	display(a, n);

	return 0;
}