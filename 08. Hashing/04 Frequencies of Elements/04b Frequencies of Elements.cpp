#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[], int n) //time comp. O(n) ; space comp. O(n)
{
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		m[arr[i]]++;
	}

	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
}

int main()
{
	int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
	int n = sizeof(arr) / sizeof(int);

	frequencies(arr, n);
	return 0;
}