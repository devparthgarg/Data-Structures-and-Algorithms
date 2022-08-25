#include<bits/stdc++.h>
using namespace std;

/*
Check if triplet with condition
a^2+b^2=c^2 exists in array
*/

//time: O(n*n*n)
bool isTriplet(vector<int> nums)
{
	int n=nums.size();

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				int x=nums[i]*nums[i];
				int y=nums[j]*nums[j];
				int z=nums[k]*nums[k];

				if((x+y)==z or (y+z)==x or (z+x)==y)
				{
					return true;
				}
			}
		}
	}

	return false;
}

int main()
{
	vector<int> nums={3,1,4,6,5};

	cout<<isTriplet(nums)<<endl;
	return 0;
}