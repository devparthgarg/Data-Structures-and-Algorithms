#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	properties :

	1.unordered set based on hashing
	2.functions : insert, begin, end, size, clear, find, count, erase, empty
	3.elements can't be present more than once
	4.all operations O(1) on average

	syntax:
	unordered_set<data_type> name;
	*/

	unordered_set<int> s;

	//inserting elements
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(50);

	//iterating method 1 (elements may not be in sorted manner)
	for (auto x : s)
	{
		cout << x << " ";
	}
	cout << endl;

	//iterating method 2
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;

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