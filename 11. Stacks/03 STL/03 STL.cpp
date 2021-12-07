#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s;

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