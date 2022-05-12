#include<bits/stdc++.h>
using namespace std;

void print(set<int> s)
{
	for(auto x:s)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

int main()
{
	set<int> s;//other method: set<int,greater<int>> s;

	//insert function
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	//iterating method 1 (printed in sorted manner)
	print(s);

	//iterating method 2
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;

	//iterating method 3 (printed in reverse order)
	for(auto it=s.rbegin();it!=s.rend();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;

	//find function
	auto it=s.find(30);

	if(it==s.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<"found"<<endl;
	}

	//size function
	cout<<s.size()<<endl;

	//clear function
	s.clear();
	cout<<s.size()<<endl;

	//count function: returns 0 or 1 
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	if(s.count(60))
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}

	//erase function: erase element or group of element 
	print(s);

	//erasing single element method 1
	s.erase(30);
	print(s);

	//erasing single element method 2
	it=s.find(40);
	s.erase(it);
	print(s);

	//erasing group of elements
	it=s.find(20);
	s.erase(it,s.end());
	print(s);	

	//lower bound function: returns iterator to the key
	//or iterator to element just greater than key. 
	//returns s.end() when no element greater than equal to
	//key element
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	it=s.lower_bound(31);
	if(it!=s.end())
	{
		cout<<(*it)<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}

	//upper bound function: returns iterator to the 
	//element just greater than key
	//returns s.end() when no element greater than equal to
	//key element
	it=s.upper_bound(30);
	if(it!=s.end())
	{
		cout<<(*it)<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}


	return 0;
}