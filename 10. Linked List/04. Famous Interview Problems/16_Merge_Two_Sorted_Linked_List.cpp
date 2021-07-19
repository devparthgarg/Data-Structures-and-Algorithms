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

node *merge(node *&a, node *&b)//time comp. O(n) n:total nodes in merged linked list ; space comp. O(1)
{
	//corner case
	if (a == NULL)
	{
		return b;
	}
	if (b == NULL)
	{
		return a;
	}

	node *head = NULL, *tail = NULL;

	if (a->data <= b->data)
	{
		head = tail = a;
		a = a->next;
	}
	else
	{
		head = tail = b;
		b = b->next;
	}

	while (a != NULL and b != NULL)
	{
		if (a->data <= b->data)
		{
			tail->next = a;
			tail = a;
			a = a->next;
		}
		else
		{
			tail->next = b;
			tail = b;
			b = b->next;
		}
	}

	if (a == NULL)
	{
		tail->next = b;
	}
	else
	{
		tail->next = a;
	}

	return head;
}

void print(node *head)
{
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	//linked list 1
	node *head1 = new node(10);
	head1->next = new node(20);
	head1->next->next = new node(30);
	print(head1);

	//linked list 2
	node *head2 = new node(5);
	head2->next = new node(15);
	head2->next->next = new node(25);
	print(head2);

	//merging
	node *head3 = merge(head1, head2);

	print(head3);
	return 0;
}