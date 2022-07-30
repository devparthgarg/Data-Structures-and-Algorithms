#include<bits/stdc++.h>
using namespace std;

/*
given n ranges find maximum 
occurring element
*/

//time: O(n*n)
//space: O(n)
int maxAppearing(int l[],int r[],int n)
{
	unordered_map<int,int> m;

	for(int i=0;i<n;i++)
	{
		for(int j=l[i];j<=r[i];j++)
		{
			m[j]++;
		}
	}

	int max_appearing=0;
	int max_count=0;

	for(auto x:m)
	{
		if(x.second>max_count)
		{
			max_count=x.second;
			max_appearing=x.first;
		}
	}

	return max_appearing;
}

int main()
{
	int l[]={1,2,5,15};
	int r[]={5,8,7,18};
	int n=sizeof(l)/sizeof(int);

	cout<<maxAppearing(l,r,n)<<endl;
	return 0;
}