#include<bits/stdc++.h>
using namespace std;

class Stack
{
	queue<int> q1,q2;
	int curr_size=0;

public:
	Stack()
	{
		curr_size=0;
	}

	void push(int d)
	{
		curr_size++;
		q2.push(d);

		while(q1.empty()==false)
		{
			q2.push(q1.front());
			q1.pop();
		}

		queue<int> q=q1;
		q1=q2;
		q2=q;
	}

	void pop()
	{
		if(q1.empty())
		{
			return ;
		}

		q1.pop();
		curr_size--;
	}

	int top()
	{
		if(q1.empty())
		{
			return -1;
		}

		return q1.front();
	}

	int size()
	{
		return q1.size();
	}
};

int main()
{
	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.size()<<endl;

	return 0;
}