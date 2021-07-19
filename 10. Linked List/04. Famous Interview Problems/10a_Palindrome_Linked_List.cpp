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

bool isPalindrome(node *head)//time comp. O(n) ; space comp. O(n)
{
	node *curr = head;
	vector<int> v;

	while (curr != NULL)
	{
		v.push_back(curr->data);
		curr = curr->next;
	}

	int i = 0, j = v.size() - 1;
	while (i < j)
	{
		if (v[i] != v[j])
		{
			return false;
		}
		i++;
		j--;
	}

	return true;
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
	head->next->next->next = new node(20);
	head->next->next->next->next = new node(10);
	print(head);

	cout << isPalindrome(head);
	return 0;
}