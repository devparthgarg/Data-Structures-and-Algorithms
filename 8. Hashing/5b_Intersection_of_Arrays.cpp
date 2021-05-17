#include<bits/stdc++.h>
using namespace std;

//returns count of elements which are same in both
int intersection(int a[],int b[],int m,int n)//time comp. O(max(m,n))
{
	unordered_set<int> sa(a,a+m);
	unordered_set<int> sb(b,b+n);

	int cnt=0;
	for(auto x:sa)
	{
		if(sb.count(x)>0)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int m,n;
	cin>>m>>n;

	int a[m];
	int b[n];

	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	cout<<intersection(a,b,m,n);
	return 0;
}