#include<bits/stdc++.h>
using namespace std;

int main()
{
	//1.c-style strings
	char s[] = "parth"; //null character ('\0') at end of string by default

	cout << s << endl;
	cout << sizeof(s) << endl << "---" << endl; //size is 6 not 5 because extra character '\0' (Null character) is stored

	//2.c-style strings
	char a[] = {'g', 'a', 'r', 'g'}; //in this format null character not stored by default

	cout << a << endl; //since null character not present , so garbage value appears at end
	cout << sizeof(a) << endl << "---" << endl;

	//3.c-style strings
	char b[] = {'a', 'm', 'a', 'n', 'd', 'a', '\0'};

	cout << b << endl;
	cout << sizeof(b) << endl << "---" << endl;

	return 0;
}