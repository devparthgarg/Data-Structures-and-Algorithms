#include<bits/stdc++.h>
using namespace std;

/*
Bubble Sort: Stable Algo
swap the consecutive elements
if they are in the wrong order.
*/

//time: O(n*n)
//space: O(1)
void bubbleSort(int a[], int n) 
{
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
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
	bubbleSort(a, n);
	display(a, n);

	return 0;
}