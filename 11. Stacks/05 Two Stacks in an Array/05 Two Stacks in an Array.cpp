#include<bits/stdc++.h>
using namespace std;

/*
top1 is on left of array
top2 is on right of array
*/

class TwoStacks
{
public:
	int *arr;
	int cap;
	int top1,top2;

	TwoStacks(int n)
	{
		cap=n;
		top1=-1;
		top2=cap;
		arr=new int[cap];
	}

	void push1(int d)
	{
		if(top1<top2-1)
		{
			top1++;
			arr[top1]=d;
		}
	}

	void push2(int d)
	{
		if(top1<top2-1)
		{
			top2--;
			arr[top2]=d;
		}
	}

	void pop1()
	{
		if(top1>=0)
		{
			top1--;
		}
		else
		{
			cout<<"underflow"<<endl;
		}
	}

	void pop2()
	{
		if(top2<cap)
		{
			top2++;
		}
		else
		{
			cout<<"underflow";
		}
	}

	int topp1()
	{
		if(top1>=0)
		{
			return arr[top1];
		}
		else
		{
			return INT_MAX;
		}
	}

	int topp2()
	{
		if(top2<cap)
		{
			return arr[top2];
		}
		else
		{
			return INT_MAX;
		}
	}
};

int main()
{
	TwoStacks s(5);

	//push in stack1
	s.push1(3);
	s.push1(6);
	s.push1(9);

	//push in stack2
	s.push2(4);
	s.push2(8);

	//top of stack1
	cout<<s.topp1()<<endl;

	//top of stack2
	cout<<s.topp2()<<endl;

	return 0;
}