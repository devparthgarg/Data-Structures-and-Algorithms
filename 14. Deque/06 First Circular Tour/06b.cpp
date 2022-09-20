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

//time: O(N)
//space: O(1)
int circularTour(int petrol[],int distance[],int n)
{
	int start=0;
	int curr_petrol=0;
	int prev_petrol=0;

	for(int i=0;i<n;i++)
	{
		curr_petrol+=(petrol[i]-distance[i]);
		if(curr_petrol<0)
		{
			start=i+1;
			prev_petrol+=curr_petrol;
			curr_petrol=0;
		}
	}

	return ((curr_petrol+prev_petrol)>=0)?(start+1):-1;
}

int main()
{
	int petrol[]={4,8,7,4};
	int distance[]={6,5,3,5};
	int n=4;

	cout<<circularTour(petrol,distance,n)<<endl;
	return 0;
}