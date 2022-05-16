#include<bits/stdc++.h>
using namespace std;

/*
print all permutations of strings 
which do not contain the substring "AB"
*/

bool check(string &s,int l,int r,int i)
{
	if(l!=0 and s[l-1]=='A' and s[i]=='B')
	{
		return false;
	}

	if(r!=l+1 and s[i]=='A' and s[l]=='B')
	{
		return false;
	}

	return true;
}

//Backtracking based solution
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
		if(check(s,l,r,i))
		{
			swap(s[i],s[l]);
			permutations(s,l+1,r);
			swap(s[i],s[l]);
		}
	}
}

int main()
{
	string s="ABC";

	permutations(s,0,s.size()-1);
	return 0;
}