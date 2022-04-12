#include<bits/stdc++.h>
using namespace std;

//Priority Queue on Objects
struct Person
{
	int age;
	float height;

	Person(int a, int h)
	{
		age = a;
		height = h;
	}
};

struct compare
{
	bool operator() (Person const &p1, Person const &p2)
	{
		p1.ht < p2.ht;
	}
};

int main()
{
	//min priority queue
	priority_queue<Person, vector<Person>, compare> pq;

	return 0;
}