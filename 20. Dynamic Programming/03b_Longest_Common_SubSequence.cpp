#include<bits/stdc++.h>
using namespace std;

/*
subsequence explanation : for n characters string --> total subsequences : 2^n
eg: string : "ABC"
	subsequence : "","A","B","C","AB","BC","AC","ABC" 
*/

int memo[10000][10000];//2D array because 2 parameters are changing m and n

//memoization
int lcs(string s1,string s2,int m,int n)//time comp. O(m*n)
{
	if(memo[m][n]==-1)
	{
		if(m==0 or n==0)
		{
			memo[m][n]=0;
		}
		else
		{
			if(s1[m-1]==s2[n-1])
			{
				memo[m][n]=1+lcs(s1,s2,m-1,n-1);
			}
			else
			{
				memo[m][n]=max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
			}
		}
	}

	return memo[m][n];
}

int main()
{
	memset(memo,-1,sizeof(memo));

	string s1="AXYZ";
	string s2="BAZ";

	int m=s1.length();
	int n=s2.length();

	cout<<lcs(s1,s2,m,n)<<endl;
	return 0;
}