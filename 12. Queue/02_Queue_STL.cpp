#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q;

	//insert
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	cout<<q.front()<<" "<<q.back()<<endl;

	//delete
	q.pop();

	cout<<q.front()<<" "<<q.back()<<endl;

	q.push(50);

	cout<<q.size()<<endl;

	//traversing
	while(q.empty()==false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}

	return 0;
}