#include<bits/stdc++.h>
using namespace std;

void freq(string s)//time comp. O(n) ; space comp. O(1)
{
	int count[26]={0};
	int n=s.length();

	for(int i=0;i<n;i++)
	{
		count[s[i]-'a']++;
	}

	for(int i=0;i<26;i++)
	{
		if(count[i]!=0)
		{
			cout<<char('a'+i)<<" "<<count[i]<<endl;
		}
	}
}

int main()
{
	string s="parthgarg";

	freq(s);
	return 0;
}