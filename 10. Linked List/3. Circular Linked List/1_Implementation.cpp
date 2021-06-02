#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

int main()
{
	/*
	Circular Linked List here is :

	10 -> 20 -> 30 
	^           |
	|			|
	-------------
	*/
	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);

	head->next=second;
	second->next=third;
	third->next=head;//this steps makes this list circular

	return 0;
}