#include<bits/stdc++.h>
using namespace std;

//time: O(1) for getMin
//space: O(n) 
class myStack
{
public:

	stack<int> ms; //main stack: it contains all elements in chronological order
	stack<int> as; //aux stack: it contains min on the top

	void push(int d)
	{
		if(ms.empty())
		{
			ms.push(d);
			as.push(d);
			return ;
		}

		ms.push(d);

		if(as.top()>=ms.top())
		{
			as.push(d);
		}
	}

	void pop()
	{
		// we are removing current minimum
		if(ms.top()==as.top())
		{
			as.pop();
		}
		ms.pop();
	}

	int top()
	{
		return ms.top();
	}

	int getMin()
	{
		return as.top();
	}
};

int main()
{
	myStack s;

	s.push(20);
	s.push(10);
	cout<<s.getMin()<<endl;

	s.push(5);
	cout<<s.getMin()<<endl;

	s.pop();
	cout<<s.getMin()<<endl;

	s.pop();
	cout<<s.getMin()<<endl;

	return 0;
}