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

	void insert(int x)
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

	//Min Heapify : Given a binary heap with one possible violation fix the heap
	void minHeapify(int i)//time comp. O(logn) ; space comp. O(logn)
	{
		//find smallest element of the three elements
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
};

int main()
{

	return 0;
}