#include<bits/stdc++.h>
using namespace std;

class Job
{
public:
	char id;	 
	int dead;
	int profit; 
};

bool compare(Job a, Job b)
{
	return (a.profit > b.profit);
}

void printJobScheduling(Job arr[],int n)//time comp. O(n^2) ; space comp. O(n)
{
	sort(arr,arr+n,compare);

	int result[n];
	bool slot[n]; 

	for (int i=0;i<n;i++)
	{
		slot[i]=false;
	}

	for (int i=0;i<n;i++)
	{
		for (int j=min(n,arr[i].dead)-1;j>=0;j--)
		{
			if (slot[j]==false)
			{
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}

	for (int i=0;i<n;i++)
	{
		if(slot[i])
		{
			cout<<arr[result[i]].id<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;

	Job arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].id>>arr[i].dead>>arr[i].profit;
	}

	printJobScheduling(arr, n);
	return 0;
}
