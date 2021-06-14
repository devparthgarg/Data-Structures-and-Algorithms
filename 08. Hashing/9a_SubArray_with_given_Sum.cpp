#include<bits/stdc++.h>
using namespace std;

//subarray means contigous elements
bool isSum(int a[],int n,int sum)//time comp. O(n^2)
{
	for(int i=0;i<n;i++)
	{
		int curr_sum=0;
		for(int j=i;j<n;j++)
		{
			curr_sum=curr_sum+a[j];
			if(curr_sum==sum)
			{
				return true;
			}
		}
	}

	return false;
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

	int sum;
	cin>>sum;

	cout<<isSum(arr,n,sum);
	return 0;
}