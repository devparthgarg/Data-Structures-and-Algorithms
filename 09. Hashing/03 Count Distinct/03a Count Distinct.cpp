#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n) //time comp. O(n^2) ; space comp. O(1)
{
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int arr[] = {15, 12, 13, 12, 13, 13, 18};
	int n = sizeof(arr) / sizeof(int);

	cout << countDistinct(arr, n);
	return 0;
}