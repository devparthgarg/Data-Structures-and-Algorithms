#include<bits/stdc++.h>
using namespace std;

//subarray means contigous elements
bool isZero(int a[],int n)//time comp. O(n^2)
{
	for(int i=0;i<n;i++)
	{
		int curr_sum=0;
		for(int j=i;j<n;j++)
		{
			curr_sum=curr_sum+a[j];
			if(curr_sum==0)
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

	cout<<isZero(arr,n);
	return 0;
}