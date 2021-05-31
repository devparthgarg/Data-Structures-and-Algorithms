#include<bits/stdc++.h>
using namespace std;

//naive method
void reverseWords(string s)//time comp. O(n) ; space comp. O(n)
{
	stack<string> st;

	string temp="";
	int n=s.length();

	for(int i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			st.push(temp);
			temp="";
		}
		else
		{
			temp=temp+s[i];
		}
	}

	st.push(temp);

	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main()
{
	string s="parth is the best";

	reverseWords(s);
	return 0;
}