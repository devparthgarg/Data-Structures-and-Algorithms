#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "parth garg";

	//method 1 : simple for loop
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
	cout << endl;

	//method 2 : for each loop
	for (char x : s)
	{
		cout << x;
	}

	return 0;
}