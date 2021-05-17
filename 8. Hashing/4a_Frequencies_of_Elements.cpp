#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[],int n)//time comp. O(n^2)
{
	for(int i=0;i<n;i++)
	{
		//check if seen before
		bool flag=false;
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==true)
		{
			continue;
		}

		//if not seen print frequency
		int freq=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				freq++;
			}
		}
		cout<<arr[i]<<" "<<freq<<endl;
	}
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

	frequencies(arr,n);
	return 0;
}