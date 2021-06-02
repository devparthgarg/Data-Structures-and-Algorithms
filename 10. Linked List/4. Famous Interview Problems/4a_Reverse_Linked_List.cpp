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

//naive method (extra space required)
void reverse(node *&head)//time comp. O(n) ; space comp. O(n)
{
	if(head==NULL or head->next==NULL)
	{
		return ;
	}	

	vector<int> v;

	node *curr=head;
	while(curr!=NULL)
	{
		v.push_back(curr->data);
		curr=curr->next;
	}

	curr=head;
	while(curr!=NULL)
	{
		curr->data=v.back();
		v.pop_back();
		curr=curr->next;
	}
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	/*
	Linked List here is :

	10 -> 20 -> 30 -> 40 -> 50 -> NULL
	*/

	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);
	node *fourth=new node(40);
	node *fifth=new node(50);

	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;

	print(head);
	reverse(head);
	print(head);

	return 0;
}