#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

class myStack
{
public:
	node* head;
	int sz;

	myStack()
	{
		head = NULL;
		sz = 0;
	}

	void push(int d)
	{
		node* n = new node(d);
		n->next = head;
		head = n;
		sz++;
	}

	void pop()
	{
		if (head == NULL)
		{
			cout << "Underflow" << endl;
			return ;
		}

		node* n = head;
		head = head->next;
		delete(n);
		sz--;
	}

	int top()
	{
		if (head == NULL)
		{
			cout << "Underflow" << endl;
			return INT_MAX;
		}

		return head->data;
	}

	int size()
	{
		return sz;
	}

	bool empty()
	{
		return (head == NULL);
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