#include<bits/stdc++.h>
using namespace std;

//Time: O(logn)
int countDigits(int n)
{
	string s = to_string(n);

	return s.size();
}

int main()
{
	int n = 12345;

	cout << countDigits(n) << endl;
	return 0;
}