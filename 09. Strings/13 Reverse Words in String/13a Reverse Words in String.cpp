#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(n)

void reverseWords(string s)
{
	stack<string> st;

	string temp = "";
	int n = s.length();

	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ')
		{
			st.push(temp);
			temp = "";
		}
		else
		{
			temp = temp + s[i];
		}
	}

	st.push(temp);

	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}

int main()
{
	string s = "parth is the best";

	reverseWords(s);
	return 0;
}