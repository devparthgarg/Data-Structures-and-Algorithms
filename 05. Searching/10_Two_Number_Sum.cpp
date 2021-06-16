#include<bits/stdc++.h>
using namespace std;

//two pointer approach - only applicable on sorted arrays
void twoSum(int a[],int n,int k)//time comp. O(n) ; space comp. O(1)
{
	int i=0;
	int j=n-1;

	while(i<j)
	{
		int sum=a[i]+a[j];
		if(sum==k)
		{
			cout<<a[i]<<" "<<a[j];
			return ;
		}
		else if(sum>k)
		{
			j--;
		}
		else
		{
			i++;
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

	sort(a,a+n);//to apply two pointer approach

	int k;
	cin>>k;

	twoSum(a,n,k);
	return 0;
}