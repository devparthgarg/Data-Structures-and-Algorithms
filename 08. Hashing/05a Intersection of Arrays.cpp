#include<bits/stdc++.h>
using namespace std;

//returns count of elements which are same in both
int intersection(int a[], int b[], int m, int n) //time comp. O(m*(m+n)) ; space comp. O(1)
{
	int cnt = 0;

	for (int i = 0; i < m; i++)
	{
		//check if seen before
		bool flag = false;

		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				flag = true;
				break;
			}
		}

		if (flag == true)
		{
			continue;
		}

		//if not seen before check if present in other array
		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				cnt++;
				break;
			}
		}
	}

	return cnt;
}

int main()
{
	int a[] = {10, 15, 20, 5, 30};
	int b[] = {30, 5, 30, 80};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	cout << intersection(a, b, m, n);
	return 0;
}