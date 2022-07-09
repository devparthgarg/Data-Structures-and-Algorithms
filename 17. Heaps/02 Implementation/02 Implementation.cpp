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

	int left(int i)//time comp. O(1)
	{
		return 2 * i + 1;
	}

	int right(int i)//time comp. O(1)
	{
		return 2 * i + 2;
	}

	int parent(int i)//time comp. O(1)
	{
		return (i - 1) / 2;
	}
};

int main()
{

	return 0;
}