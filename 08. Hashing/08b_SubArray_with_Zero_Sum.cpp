#include<bits/stdc++.h>
using namespace std;

//subarray means contigous elements
//using prefix sum and hashing
bool isZero(int a[],int n)//time comp. O(n)
{
	unordered_set<int> s;

	int pre_sum=0;

	for(int i=0;i<n;i++)
	{
		pre_sum=pre_sum+a[i];
		if(s.find(pre_sum)!=s.end())
		{
			return true;
		}
		if(pre_sum==0)
		{
			return true;
		}
		s.insert(pre_sum);
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