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

//using hashing
int intersection(node *a, node *b)//time comp. O(m+n) ; space comp. O(m)
{
	//insert all nodes of linked list a into a set
	unordered_set<node*> s;

	while (a != NULL)
	{
		s.insert(a);
		a = a->next;
	}

	while (b != NULL)
	{
		if (s.find(b) != s.end())
		{
			return b->data;
		}
		b = b->next;
	}

	return -1;
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
	//helper linked list
	node *help = new node(15);
	help->next = new node(30);

	//linked list 1
	node *head1 = new node(3);
	head1->next = new node(6);
	head1->next->next = new node(9);
	head1->next->next->next = help;
	print(head1);

	//linked list 2
	node *head2 = new node(10);
	head2->next = help;
	print(head2);

	//intersection
	cout << intersection(head1, head2);
	return 0;
}