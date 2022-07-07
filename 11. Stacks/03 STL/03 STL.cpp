#include<bits/stdc++.h>
using namespace std;

/*
All stack functions having time complexties 
O(1)
*/

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

	//top element
	cout << s.top() << endl;

	//pop elements from top of stack
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();

	//check if stack empty, returns 1 if stack empty
	cout << s.empty() << endl;

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