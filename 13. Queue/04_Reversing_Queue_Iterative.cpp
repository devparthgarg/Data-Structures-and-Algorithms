#include<bits/stdc++.h>
using namespace std;

void print(queue<int> q)
{
	while(q.empty()==false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

void reverse(queue<int> &q)//time comp. O(n) ; space comp. O(n)
{
	stack<int> s;

	while(q.empty()==false)
	{
		s.push(q.front());
		q.pop();
	}

	while(s.empty()==false)
	{
		q.push(s.top());
		s.pop();
	}
}

int main()
{
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	print(q);
	reverse(q);
	print(q);

	return 0;
}