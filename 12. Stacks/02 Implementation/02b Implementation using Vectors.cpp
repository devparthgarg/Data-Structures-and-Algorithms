#include<bits/stdc++.h>
using namespace std;

/*
Vectors: Memory allocated is dynamic.
So, no underflow and overflow.
*/

class myStack
{
public:
	vector<int> v;

	void push(int d)
	{
		v.push_back(d);
	}

	void pop()
	{
		v.pop_back();
	}

	int top()
	{
		return v[v.size() - 1];
	}

	int size()
	{
		return v.size();
	}

	bool empty()
	{
		return (v.empty() == 0);
	}
};

int main()
{
	myStack s;

	//push elements
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	//size of stack
	cout << s.size() << endl;

	//top element
	cout << s.top() << endl;

	//pop elements from end of array
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();

	//check if stack empty, returns 1 if stack empty
	cout << s.size() << endl;

	//stack traversal
	s.push(10);
	s.push(20);
	s.push(15);

	while (s.empty() == false)
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	return 0;
}