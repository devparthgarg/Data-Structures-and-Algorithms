#include<bits/stdc++.h>
using namespace std;

//linear search
int countOcc(int a[], int n, int key)//time comp. O(n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int a[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
	int n = sizeof(a) / sizeof(int);
	int key = 30;

	cout << countOcc(a, n, key);
	return 0;
}