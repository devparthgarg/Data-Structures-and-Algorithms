#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n)//time comp. O(n^2) ; space comp. O(1) ; unstable algorithm
{
	//find ith min. element and place in correct position
	for(int i=0;i<n-1;i++)
	{
		int minidx=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[minidx])
			{
				minidx=j;
			}
		}
		swap(a[i],a[minidx]);
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

	selectionSort(a,n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}