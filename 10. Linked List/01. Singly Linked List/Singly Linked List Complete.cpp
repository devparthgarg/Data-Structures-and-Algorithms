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

void iterativePrint(node *head)
{
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head->next;
	}
	cout << endl;
}

void recursivePrint(node *head)
{
	if (head == NULL)
	{
		return ;
	}

	cout << head->data << "->";
	recursivePrint(head->next);
}

node *insertAtHead(node *head, int d)
{
	node *n = new node(d);
	n->next = head;
	return n;
}

node *insertAtTail(node *head, int d)
{
	node *n = new node(d);

	if (head == NULL)
	{
		return n;
	}

	node* curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = n;
	return head;
}

node *deleteAtHead(node *head)
{
	if (head == NULL)
	{
		return NULL;
	}

	node *curr = head;
	head = head->next;
	delete curr;

	return head;
}

node *deleteAtTail(node *head)
{
	if (head == NULL)
	{
		return NULL;
	}

	if (head->next == NULL)
	{
		delete head;
		return NULL;
	}

	node* curr = head;
	while (curr->next->next != NULL)
	{
		curr = curr->next;
	}

	delete curr->next;
	curr->next = NULL;

	return head;
}

node *insertAtPosition(node *head, int d, int p)
{
	node *n = new node(d);

	if (p == 1)
	{
		n->next = head;
		return n;
	}

	node *curr = head;
	int i = 1;

	while (i <= p - 2 and curr != NULL)
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

int iterativeSearch(node *head, int d)
{
	int p = 1;
	while (head != NULL)
	{
		if (head->data == d)
		{
			return p;
		}
		p++;
		head = head->next;
	}

	return -1;
}

int recursiveSearch(node *head, int d)
{
	if (head == NULL)
	{
		return -1;
	}

	if (head->data == d)
	{
		return 1;
	}
	else
	{
		int res = recursiveSearch(head->next, d);

		if (res == -1)
		{
			return -1;
		}
		else
		{
			return res + 1;
		}
	}
}

int main()
{
	/*
	Linked List :
	10->20->30->NULL
	*/
	node *head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);

	iterativePrint(head);

	recursivePrint(head);
	cout << endl;

	head = insertAtHead(head, 40);
	iterativePrint(head);

	head = insertAtTail(head, 50);
	iterativePrint(head);

	head = deleteAtHead(head);
	iterativePrint(head);

	head = deleteAtTail(head);
	iterativePrint(head);

	head = insertAtPosition(head, 60, 3);
	iterativePrint(head);

	cout << iterativeSearch(head, 20) << endl;
	cout << recursiveSearch(head, 20) << endl;

	return 0;
}