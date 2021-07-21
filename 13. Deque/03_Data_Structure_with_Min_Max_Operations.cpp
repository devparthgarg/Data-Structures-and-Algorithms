#include<bits/stdc++.h>
using namespace std;

/*
Design a data structure that supports the following operations in O(1) time.
1) Insert Minimum
2) Insert Maximum
3) Get Minimum
4) Get Maximum
5) Delete Minimum
6) Delete Maximum
*/

class myDeque
{
public:
	deque<int> dq;

	void insertMin(int d)
	{
		dq.push_front(d);
	}

	void insertMax(int d)
	{
		dq.push_back(d);
	}

	int getMin()
	{
		return dq.front();
	}

	int getMax()
	{
		return dq.back();
	}

	void delMin()
	{
		dq.pop_front();
	}

	void delMax()
	{
		dq.pop_back();
	}

	void print()
	{
		for (auto x : dq)
		{
			cout << x << " ";
		}
		cout << endl;
	}
};

int main()
{
	//declaration
	myDeque dq;

	//insertMin
	dq.insertMin(3);
	dq.insertMin(2);
	dq.insertMin(1);
	dq.print();

	//insertMax
	dq.insertMax(4);
	dq.insertMax(5);
	dq.insertMax(6);
	dq.print();

	//getMin
	cout << dq.getMin() << endl;

	//getMax
	cout << dq.getMax() << endl;

	//delMin
	dq.delMin();
	dq.print();

	//delMax
	dq.delMax();
	dq.print();

	return 0;
}