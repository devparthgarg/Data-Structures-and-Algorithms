#include<bits/stdc++.h>
using namespace std;

/*
suppose original sorted array is : 1 2 3 5 8

now rotate it (any number of times clockwise or anticlockwise) 
eg: 2 3 5 8 1 

so above array is sorted rotated array 

we need to search in this kind of array 
*/

//naive solution (simple linear search)
int searchRotated(int a[],int n,int key)//time comp. O(n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}

	return -1;
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

	int key;
	cin>>key;

	cout<<searchRotated(a,n,key);
	return 0;
}