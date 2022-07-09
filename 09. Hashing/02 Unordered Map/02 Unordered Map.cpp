#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	properties :

	1.used to store key-value pair
	2.based on hashing
	3.no order of keys
	4.on average all operations O(1)

	syntax :

	unordered_map<key,value> name;
	*/

	unordered_map<string, int> m;

	m["parth"] = 13;
	m["aditya"] = 6;
	m.insert({"akhil", 21});

	//iterating method 1 : ordered in which pairs is stored may be different
	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
	cout << "---" << endl;

	//iterating method 2
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	cout << "---" << endl;

	//find function
	if (m.find("aditya") == m.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found" << endl;
	}
	cout << "---" << endl;

	//count function : return type is size_t
	if (m.count("akhil") > 0)
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	cout << "---" << endl;

	//size function
	cout << m.size() << endl;
	cout << "---" << endl;

	//erase function
	m.erase("aditya");
	m.erase(m.begin());

	cout << m.size() << endl;
	cout << "---" << endl;

	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}