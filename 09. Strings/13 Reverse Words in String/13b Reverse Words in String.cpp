#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int low, int high) //helper function
{
	while (low < high)
	{
		swap(s[low], s[high]);
		low++;
		high--;
	}
}

//Time: O(n)
//Space: O(1)

void reverseWords(string &s)
{
	int n = s.length();
	int start = 0;

	for (int end = 0; end < n; end++)
	{
		if (s[end] == ' ')
		{
			reverse(s, start, end - 1);
			start = end + 1;
		}
	}

	reverse(s, start, n - 1);
	reverse(s, 0, n - 1);
}

int main()
{
	string s = "parth is the best";

	reverseWords(s);
	cout << s;
	return 0;
}