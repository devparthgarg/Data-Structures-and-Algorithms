#include<bits/stdc++.h>
using namespace std;

//time: O(n)
//space: O(n)
int checkSubarray0Sum(int nums[],int n)
{
	int presum=0;
	unordered_set<int> s;

	for(int i=0;i<n;i++)
	{
		presum+=nums[i];

		if(presum==0)
		{
			return true;
		}

		if(s.find(presum)!=s.end())
		{
			return true;
		}
		else
		{
			s.insert(presum);
		}
	}

	return false;
}

int main()
{
	int arr[]={4,2,-3,-1,0,4};
	int n=sizeof(arr)/sizeof(int);

	cout<<checkSubarray0Sum(arr,n)<<endl;
	return 0;

}