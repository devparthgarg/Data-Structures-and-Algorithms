#include<bits/stdc++.h>
using namespace std;

/*
Selection Sort: Unstable Algo
it maintains two arrays
one which is sorted and 
one which is not sorted
find the element which is min 
and place this element at its
correct position.
*/

//time: O(n*n)
//space: O(1)
void selectionSort(int a[], int n) 
{
	//find ith min. element and place in correct position
	for (int i = 0; i < n - 1; i++)
	{
		int minidx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minidx])
			{
				minidx = j;
			}
		}
		swap(a[i], a[minidx]);
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
	int a[] = {3, 2, 4, 1, 5};
	int n = sizeof(a) / sizeof(int);

	display(a, n);
	selectionSort(a, n);
	display(a, n);

	return 0;
}