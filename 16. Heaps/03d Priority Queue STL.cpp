#include<bits/stdc++.h>
using namespace std;

/*
Implementing priority queue on custom class
and using custom comparator function
*/

struct person
{
	int age;
	float ht;
	person(int a, int h)
	{
		age = a;
		ht = h;
	}
};

struct myCmp
{
	bool operator() (person const &p1, person const &p2)
	{
		p1.ht < p2.ht;
	}
};

int main()
{
	priority_queue<person, vector<person>, myCmp> pq;

	return 0;
}