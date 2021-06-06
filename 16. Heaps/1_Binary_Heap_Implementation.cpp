#include<bits/stdc++.h>
using namespace std;

class minHeap
{
	int *arr;
	int sz;
	int capacity;

public:
	minHeap(int c)
	{
		arr=new int[c];
		sz=0;
		capacity=c;
	}

	int left(int i)
	{
		return (2*i+1);
	}

	int right(int i)
	{
		return (2*i+2);
	}

	int parent(int i)
	{
		return (i-1)/2;
	}
};

int main()
{
	return 0;
}