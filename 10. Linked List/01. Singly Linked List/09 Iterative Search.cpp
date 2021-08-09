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

int search(node *head, int d)//time comp. O(n) ; space comp. O(1)
{
	int p = 1; //position of node
	while (head != NULL)
	{
		if (head->data == d)
		{
			return p;
		}
		head = head->next;
		p++;
	}

	return -1;
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