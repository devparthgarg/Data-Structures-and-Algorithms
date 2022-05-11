#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	set only stores unique values 
	duplicate values are neglected.	
	*/

	set<int> s;//other way is to use set<int,greater<int>> s

	//insert
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	//iterating method 1 (printed in sorted manner)
	for(auto x:s)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	//iterating method 2 (printed in sorted manner)
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

	//find function : returns iterator
	if (s.find(30) == s.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found " << (*s.find(30)) << endl;
	}

	//count function : returns 0 or 1 , alternative to find function
	if (s.count(50))
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}

	//erase function
	s.erase(30);
	if (s.find(30) == s.end())
	{
		cout << "not found " << endl;
	}
	else
	{
		cout << "found " << (*s.find(30)) << endl;
	}

	//lower_bound function: iterator to element if present
	//or returns just greater element than key
	auto it=s.lower_bound(41);
	cout<<*it<<endl;

	//upper_bound function: iterator to element if present
	//or returns just smaller element than key
	auto it2=s.upper_bound(41);
	cout<<*it2<<"--"<<endl;

	//size
	cout << s.size() << endl;
	s.clear(); //alternative s.erase(s.begin(),s.end());
	cout << s.size() << endl;

	//empty
	if (s.empty())
	{
		cout << "empty set" << endl;
	}
	else
	{
		cout << "not empty" << endl;
	}

	return 0;
}