#include<bits/stdc++.h>
using namespace std;

void distinctInKSizeWindow(int a[], int n, int k)//time comp. O((n-k)*k*k) ; space comp. O(1)
{
	for (int i = 0; i <= n - k; i++)
	{
		int cnt = 0;
		for (int j = 0; j < k; j++)
		{
			bool flag = false;
			for (int p = 0; p < j; p++)
			{
				if (a[i + j] == a[i + p])
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
		cout << cnt << " ";
	}
}

int main()
{
	int arr[] = {10, 10, 5, 3, 20, 5};
	int n = sizeof(arr) / sizeof(int);
	int k = 4;

	distinctInKSizeWindow(arr, n, k);
	return 0;
}
