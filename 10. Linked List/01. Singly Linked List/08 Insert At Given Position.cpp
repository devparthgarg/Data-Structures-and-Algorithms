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

node *insertAtPosition(node *head, int d, int p)//time comp. O(n) ; space comp. O(1)
{
	node *n = new node(d);

	if (p == 1) //insert at head
	{
		n->next = head;
		return n;
	}

	node *curr = head;
	int i = 1;

	while (i <= (p - 2) and curr != NULL)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
	{
		return head;
	}

	n->next = curr->next;
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

	(here 10 is the 1st position)
	*/
	node *head = new node(10);
	node *second = new node(20);
	node *third = new node(30);

	head->next = second;
	second->next = third;

	print(head);
	head = insertAtPosition(head, 40, 3);
	print(head);

	return 0;
}