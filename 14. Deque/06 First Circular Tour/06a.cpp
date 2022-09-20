#include<bits/stdc++.h>
using namespace std;

/*
We have n petrol pumps arranged in a
circular manner. We are given distances
between each petrol pump.
We need to find first petrol pump from
which you can start travelling and end
at the start petrol pump by covering
all petrol pump. Return the index of that
petrol pump.
*/

//time: O(N*N)
//space: O(1)
int circularTour(int petrol[],int distance[],int n)
{
	for(int start=0;start<n;start++)
	{
		int curr_petrol=0;
		int end=start;
		while(true)
		{
			curr_petrol+=(petrol[end]-distance[end]);
			if(curr_petrol<0)
			{
				break;
			}
			end=(end+1)%n;
			if(end==start)
			{
				return (start+1);
			}
		}
	}

	return -1;
}

int main()
{
	int petrol[]={4,8,7,4};
	int distance[]={6,5,3,5};
	int n=4;

	cout<<circularTour(petrol,distance,n)<<endl;
	return 0;
}