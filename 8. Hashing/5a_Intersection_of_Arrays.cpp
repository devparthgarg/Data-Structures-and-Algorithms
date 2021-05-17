#include<bits/stdc++.h>
using namespace std;

//returns count of elements which are same in both
int intersection(int a[],int b[],int m,int n)//time comp. O(m*(m+n))
{
	int cnt=0;

	for(int i=0;i<m;i++)
	{
		//check if seen before
		bool flag=false;

		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				flag=true;
				break;
			}
		}

		if(flag==true)
		{
			continue;
		}

		//if not seen before check if present in other array
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				cnt++;
				break;
			}
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