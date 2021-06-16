#include<bits/stdc++.h>
using namespace std;

//two pointer approach - only applicable on sorted arrays
void threeSum(int a[],int n,int k)//time comp. O(n^2) ; space comp. O(1)
{
	for(int i=0;i<n;i++)
	{
		int p1=i+1;
		int p2=n-1;

		while(p1<p2)
		{
			int sum=a[i]+a[p1]+a[p2];
			if(sum==k)
			{
				cout<<a[i]<<" "<<a[p1]<<" "<<a[p2];
				return ;
			}
			else if(sum>k)
			{
				p2--;
			}
			else
			{
				p1++;
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	int k;
	cin>>k;

	threeSum(a,n,k);
	return 0;
}