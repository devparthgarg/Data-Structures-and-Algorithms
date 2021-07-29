#include<bits/stdc++.h>
using namespace std;

/*
Number of Digits :
eg: n=123 ; output : 3
eg: n=0   ; output : 1
*/

//String Based Solution
int countDigits(int n)
{
	string str = to_string(n);

	return str.length();
}

int main()
{
	int n;
	cin >> n;

	cout << countDigits(n) << endl;
	return 0;
}