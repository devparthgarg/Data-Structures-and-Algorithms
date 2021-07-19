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

void pairwiseSwap(node *&head)//time comp. O(n) ; space comp. O(1)
{
	node *curr = head;
	while (curr != NULL and curr->next != NULL)
	{
		swap(curr->data, curr->next->data);
		if (curr->next->next != NULL)
		{
			curr = curr->next->next;
		}
	}
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
	node *head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);

	print(head);
	pairwiseSwap(head);
	print(head);

	return 0;
}