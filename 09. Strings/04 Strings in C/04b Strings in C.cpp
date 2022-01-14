#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[] = "parth";
	char b[] = "amanda";

	//functions for c-style strings

	//1.strlen(string) : gives length of string excluding null character
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;

	cout << "---" << endl;

	//2.strcmp(s1,s2)  : compares strings lexiographically

	/*

	3 cases :

	a.strcmp returns =0 if both strings equal
	b.strcmp returns >0 if s1 is lexiographically greater than s2
	c.strcmp returns <0 if s1 is lexiographically smaller than s2

	*/

	int x = strcmp(a, b);

	if (x == 0)
	{
		cout << "equal" << endl;
	}
	else if (x > 0)
	{
		cout << "a greater than b" << endl; //this line will be printed because ASCII value of 'p' greater than that of 'g'
	}
	else
	{
		cout << "a smaller than b" << endl;
	}

	cout << "---" << endl;


	//3.strcpy(destination,string) : copies one string to another string

	/*

	1. char s[5];
	2. s="parthgarg";
	3. cout<<s;

	above snippet code will generate compiler error
	because step 2 is wrong , we can't assign like this
	so we use strcpy to copy "parthgarg" to s

	*/

	char s[5];
	strcpy(s, "parth");
	cout << s << endl;

	return 0;
}