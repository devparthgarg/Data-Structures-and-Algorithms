#include<bits/stdc++.h>
using namespace std;

/*
suppose original sorted array is : 1 2 3 5 8

now rotate it (any number of times clockwise or anticlockwise)
eg: 2 3 5 8 1

so above array is sorted rotated array

we need to search in this kind of array
*/

//linear search
int searchRotated(int a[], int n, int key)//time comp. O(n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int a[] = {10, 20, 30, 40, 50, 8, 9};
	int n = sizeof(a) / sizeof(int);
	int key = 30;

	cout << searchRotated(a, n, key);
	return 0;
}