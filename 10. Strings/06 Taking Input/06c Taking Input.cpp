#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s, '$');

	/*

	getline function also has a third parameter
	which is optional , you can replace '$' with any
	other character . This parameter is used to stop
	getline function to take input .

	*/

	cout << s;
	return 0;
}