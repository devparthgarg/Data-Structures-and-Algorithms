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

	//insert function
	void insert(int x)//time comp. O(logn) ; space comp. O(1)
	{
		if(sz==capacity)
		{
			return ;
		}

		sz++;
		arr[sz-1]=x;

		int i=sz-1;
		while(i!=0 and arr[parent(i)]>arr[i])
		{
			swap(arr[parent(i)],arr[i]);
			i=parent(i);
		}
	}

	//min heapify : given binary heap with one violation of its property , fix the heap
	void minHeapify(int i)
	{
		//get left and right child
		int lt=left(i);
		int rt=right(i);

		//compare root 
		int smallest=i;

		if(lt<sz and arr[lt]<arr[i])
		{
			smallest=lt;
		}
		if(rt<sz and arr[rt]<arr[smallest])
		{
			smallest=rt;
		}

	}

};

int main()
{
	return 0;
}