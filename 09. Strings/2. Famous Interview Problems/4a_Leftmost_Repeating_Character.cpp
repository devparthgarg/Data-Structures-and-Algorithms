#include<bits/stdc++.h>
using namespace std;

//naive approach
int leftMostRepeating(string s)//time comp. O(n^2) ; space comp. O(1)
{
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				return i;
			}
		}
	}

	return -1;
}

int main()
{
	string s="parthgarg";

	cout<<leftMostRepeating(s);
	return 0;
}