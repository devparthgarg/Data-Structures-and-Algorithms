#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[], int n) //time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < n; i++)
	{
		//check if seen before
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				flag = true;
				break;
			}
		}

		if (flag)
		{
			continue;
		}

		//if not seen before, count frequencies
		int cnt = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				cnt++;
			}
		}
		cout << arr[i] << " " << cnt << endl;
	}
}

int main()
{
	int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
	int n = sizeof(arr) / sizeof(int);

	frequencies(arr, n);
	return 0;
}