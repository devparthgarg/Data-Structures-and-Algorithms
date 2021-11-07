#include<bits/stdc++.h>
using namespace std;

/*
Given an array, only one element is repeating in it.
Find that element such that:
--> n>=2
--> only one element repeats any number of times
--> all the elements from 0 to max(arr) are present
*/

//super naive
int repeatingElement(int a[], int n)//time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				return a[i];
			}
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}