#include<bits/stdc++.h>
using namespace std;

void print(deque<int> dq)
{
	for (auto x : dq)
	{
		cout << x << " ";
	}
	cout << endl;
}

int main()
{
	//declaration
	deque<int> dq = {1, 2, 3};

	//push_front()
	dq.push_front(4);
	print(dq);

	//push_back()
	dq.push_back(5);
	print(dq);

	//pop_front()
	dq.pop_front();
	print(dq);

	//pop_back()
	dq.pop_back();
	print(dq);

	//front()
	cout << dq.front() << endl;

	//back()
	cout << dq.back() << endl;

	//size()
	cout << dq.size() << endl;

	//max_size()
	cout << dq.max_size() << endl;

	//empty()
	if (dq.empty())
	{
		cout << "deque is empty" << endl;
	}
	else
	{
		cout << "deque is not empty" << endl;
	}

	//random access
	cout << dq[1] << endl;

	return 0;
}