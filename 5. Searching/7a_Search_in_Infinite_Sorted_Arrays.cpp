#include<iostream>
using namespace std;

int search(int a[],int key)//time comp. O(p) p:position or index in array
{
	int i=0;

	while(true)
	{
		if(a[i]==key)
		{
			return i;
		}
		if(a[i]>key)
		{
			return -1;
		}
		i++;
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

	int key;
	cin>>key;

	cout<<search(a,key);
	return 0;
}