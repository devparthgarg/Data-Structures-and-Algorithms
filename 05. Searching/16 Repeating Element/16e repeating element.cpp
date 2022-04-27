#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n)//time comp. O(n) ; space comp. O(1)
{
	for(int i=0;i<n;i++)
	{
		int idx=abs(a[i])-1;
		if(a[idx]<0)
		{
			return (idx+1);
		}
		a[idx]=-a[idx];
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n)<<endl;
	return 0;
}