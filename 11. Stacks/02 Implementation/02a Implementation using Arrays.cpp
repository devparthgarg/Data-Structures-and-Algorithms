#include<bits/stdc++.h>
using namespace std;

class myStack
{
public:
	int *arr;
	int cap;
	int idx_top_element;

	myStack(int c)
	{
		cap = c;
		arr = new int[cap];
		idx_top_element = -1;
	}

	void push(int d)
	{
		if (idx_top_element == cap - 1)
		{
			cout << "Overflow" << endl;
			return ;
		}
		idx_top_element++;
		arr[idx_top_element] = d;
	}

	void pop()
	{
		if (idx_top_element == -1)
		{
			cout << "Underflow" << endl;
			return ;
		}
		idx_top_element--;
	}

	int top()
	{
		if (idx_top_element == -1)
		{
			cout << "Underflow" << endl;
			return INT_MAX;
		}
		return arr[idx_top_element];
	}

	int size()
	{
		return (idx_top_element + 1);
	}

	bool empty()
	{
		return (idx_top_element == -1);
	}
};

int main()
{
	myStack s(5);

	//push elements
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	//size of stack
	cout << s.size() << endl;

	//OVERFLOW condition
	s.push(60);

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

	//UNDERFLOW condition
	s.pop();
	s.top();

	//stack traversal
	s.push(10);
	s.push(20);
	s.push(15);

	while (s.empty() == false)
	{
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}