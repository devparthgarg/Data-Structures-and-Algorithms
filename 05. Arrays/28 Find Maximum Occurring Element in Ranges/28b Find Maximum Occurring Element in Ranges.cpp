#include<bits/stdc++.h>
using namespace std;

/*
given n ranges find maximum 
occurring element
*/

//time: O(n)
//space: O(n)
int maxAppearing(int l[],int r[],int n)
{
	/*
	trick:
	--> increment arr[l[i]] in aux array (denoting starting of range)
	--> decrement arr[r[i]+1] in aux array (denoting ending of range)
	--> find prefix sum of array
	--> return max count
	(only applicable for small size elements ~1000)
	*/

	vector<int> arr(1000);

	for(int i=0;i<n;i++)
	{
		arr[l[i]]++;
		arr[r[i]+1]--;
	}

	//prefix sum
	for(int i=1;i<1000;i++)
	{
		arr[i]+=arr[i-1];
	}

	//find max
	int max_count=0;
	int res=0;

	for(int i=0;i<1000;i++)
	{
		if(arr[i]>max_count)
		{
			max_count=arr[i];
			res=i;
		}
	}

	return res;
}

int main()
{
	int l[]={1,2,5,15};
	int r[]={5,8,7,18};
	int n=sizeof(l)/sizeof(int);

	cout<<maxAppearing(l,r,n)<<endl;
	return 0;
}