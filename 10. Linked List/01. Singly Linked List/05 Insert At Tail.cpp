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

node *insertAtTail(node *head, int d)//time comp. O(n) ; space comp. O(1)
{
	node *n = new node(d);

	if (head == NULL)
	{
		return n;
	}

	node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = n;

	return head;
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
	head = insertAtTail(head, 40);
	print(head);

	return 0;
}