#include<bits/stdc++.h>
using namespace std;

/*
Given an array of n elements, where each element is
at most k (index -> [i-k,i+k]) away from its target position.
Sort the array in minimum time complexity
*/

void kSorted(int a[], int n, int k)//time comp. O(n*logk) ; space comp. O(k)
{
	//min heap becuase elements are to be sorted and top element should be smallest
	priority_queue<int, vector<int>, greater<int>> pq;

	//push k elements into min heap
	for (int i = 0; i <= k; i++)
	{
		pq.push(a[i]);
	}

	//track index
	int index = 0;

	for (int i = k + 1; i < n; i++)
	{
		a[index++] = pq.top();
		pq.pop();
		pq.push(a[i]);
	}

	//empty priority queue
	while (!pq.empty())
	{
		a[index++] = pq.top();
		pq.pop();
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
	int a[] = {10, 9, 8, 7, 4, 70, 50, 60};
	int n = sizeof(a) / sizeof(int);
	int k = 4;

	kSorted(a, n, k);
	display(a, n);

	return 0;
}