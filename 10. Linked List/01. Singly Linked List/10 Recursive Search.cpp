#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

int search(node *head, int d)//time comp. O(n) ; space comp. O(n)
{
	//base case
	if (head == NULL)
	{
		return -1;
	}

	if (head->data == d)
	{
		return 1;
	}

	//recursive case
	int res = search(head->next, d);

	if (res == -1)
	{
		return -1;
	}
	else
	{
		return (res + 1);
	}
}

void print(node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	/*
	Linked list here is :
	10 -> 20 -> 30 -> NULL
	*/
	node *head = new node(10);
	node *second = new node(20);
	node *third = new node(30);

	head->next = second;
	second->next = third;

	print(head);

	cout << search(head, 20);
	return 0;
}