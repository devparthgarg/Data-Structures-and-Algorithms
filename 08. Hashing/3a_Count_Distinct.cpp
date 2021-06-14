#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)//time comp. O(n^2)
{
	int cnt=0;

	for(int i=0;i<n;i++)
	{
		bool flag=false;
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==false)
		{
			cnt++;
		}
	}	

	return cnt;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<countDistinct(arr,n);
	return 0;
}