#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
	int arr[];
	int size;
	int capacity;

public:

	MinHeap(int c)
	{
		arr = new int[c];
		size = 0;
		capacity = c;
	}

	int left(int i)
	{
		return (2 * i + 1);
	}

	int right(int i)
	{
		return (2 * i + 2);
	}

	int parent(int i)
	{
		return (i - 1) / 2;
	}

	void decreaseKey(int i, int x)//time comp. O(logn)
	{
		arr[i] = x;

		while (i != 0 and arr[parent(i)] > arr[i])
		{
			swap(arr[i], arr[parent(i)]);
			i = parent(i);
		}
	}
};

int main()
{

	return 0;
}