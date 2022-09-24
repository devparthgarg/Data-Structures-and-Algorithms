#include<bits/stdc++.h>
using namespace std;

/*
Insertion Sort: Stable Algo
it is like sorting playing cards.
insert the value in presorted array
to sort the value in array.
*/

//time: O(n*n)
//space: O(1)
void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > key) 
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
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
	insertionSort(a, n);
	display(a, n);

	return 0;
}
