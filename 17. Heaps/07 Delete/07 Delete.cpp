#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
	int *arr;
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

	void insert(int x)//time comp. O(logn)
	{
		if (size == capacity)
		{
			return ;
		}

		size++;
		arr[size - 1] = x;

		int i = size - 1;
		while (i > 0 and arr[parent(i)] > arr[i])
		{
			swap(arr[parent(i)], arr[i]);
			i = parent(i);
		}
	}

	void minHeapify(int i)
	{
		//find index of smallest element of the three elements
		int lt = left(i);
		int rt = right(i);
		int smallest = i;

		if (lt < size and arr[lt] < arr[i])
		{
			smallest = lt;
		}
		if (rt < size and arr[rt] < arr[smallest])
		{
			smallest = rt;
		}
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);

			//recursive call
			minHeapify(smallest);
		}
	}

	int extractMin()//time comp. O(logn) ; space comp. O(logn)
	{
		if (size == 0)
		{
			return INT_MAX;
		}

		if (size == 1)
		{
			size--;
			return arr[0];
		}

		swap(arr[0], arr[size - 1]);
		size--;
		minHeapify(0);

		return arr[size];
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

	void deleteKey(int i)//time: O(logn)
	{
		decreaseKey(i,INT_MIN);
		extractMin();
	}
};

int main()
{

	return 0;
}