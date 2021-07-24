#include<bits/stdc++.h>
using namespace std;

int countOcc(int a[], int n, int key) //time comp. O(n)
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
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int key;
	cin >> key;

	cout << countOcc(a, n, key);
	return 0;
}