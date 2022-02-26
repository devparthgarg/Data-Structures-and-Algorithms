#include<bits/stdc++.h>
using namespace std;

//Time: O(1)
int countDigits(int n)
{
	return floor(log10(n) + 1);
}

int main()
{
	int n = 12345;

	cout << countDigits(n) << endl;
	return 0;
}