#include<bits/stdc++.h>
using namespace std;

/*
print all permutations of strings 
which do not contain the substring "AB"
*/

void permutations(string &s,int l,int r)
{
	if(l==r)
	{
		if(s.find("AB")==string::npos)
		{
			cout<<s<<endl;
			return ;
		}
	}

	for(int i=l;i<=r;i++)
	{
		swap(s[i],s[l]);
		permutations(s,l+1,r);
		swap(s[i],s[l]);
	}
}

int main()
{
	string s="ABC";

	permutations(s,0,s.size()-1);
	return 0;
}